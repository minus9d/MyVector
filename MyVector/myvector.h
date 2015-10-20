#pragma once

#include <memory>
#include <vector>
#include <cassert>

namespace mystd {

template <typename T>
class myvector
{
public:
    // c'tors
    myvector() = default;
    explicit myvector(int size) {
        assert(size >= 0);
        if (size == 0) return;

        m_buffer = new T[size];
        m_size = size;

        // TODO: need to catch std::bad_alloc
        assert(m_buffer != nullptr);
    };
    myvector(int size, T num)
    : myvector(size) {
        assert(m_size == size);
        for (int i = 0; i < size; ++i) {
            m_buffer[i] = num;
        }
    };

    // d'tor
    ~myvector() {
        clear();
    };

    // copy c'tor
    myvector(const myvector& obj)
        : myvector(obj.m_size)
    {
        assert(m_size == obj.m_size);
        std::memcpy(m_buffer, obj.m_buffer, sizeof(T) * m_size);
    };

    // copy assignment operator
    myvector& operator=(const myvector& p) {
        if (this != &p) {
            clear();
            m_buffer = new T[p.m_size];
            m_size = p.m_size;
            assert(m_buffer != nullptr);
            std::memcpy(m_buffer, p.m_buffer, sizeof(T) * m_size);
        }
        return *this;
    }

    // clear
    void clear()
    {
        if (m_buffer != nullptr)
        {
            delete[] m_buffer;
            m_buffer = nullptr;
        }
    }

    T const& operator[](int index) const {
        // TODO: throw range_error
        assert(0 <= index && index < m_size);
        return m_buffer[index];
    }



private:
    T* m_buffer = nullptr;
    int m_size = 0;
};

}