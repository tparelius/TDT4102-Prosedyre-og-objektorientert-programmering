#pragma once
#include <algorithm>
#include <random>
#include <chrono>

template<typename T>
T maximum(T x, T y)
{
	return (x > y) ? x : y;
}

template<typename V>
V shuffle(V &vec)
{
	std::shuffle(begin(vec), end(vec), std::default_random_engine());
	return vec;
	
}