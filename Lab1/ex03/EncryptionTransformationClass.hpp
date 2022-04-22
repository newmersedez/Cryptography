#pragma once

#include <bitset>

template <size_t key_size>
class EncryptionTransformationClass
{
typedef std::bitset<key_size> bitset;

public:
	virtual ~EncryptionTransformationClass();
	virtual bitset encryptionTransformation(const bitset& bitset, const bitset& round_key) = 0;
};