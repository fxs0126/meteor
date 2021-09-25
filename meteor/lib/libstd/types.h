#ifndef __TYPES_H
#define __TYPES_H
#include <cstring>
#include <vector>
#include <map>
#include <set>
#include <iostream>
using namespace std;
typedef void* 			Handle;
//typedef long long 		Int;
typedef int   			Int;
typedef short 			Short;
typedef char  			Int8;
typedef float			Float;
typedef double 			Double;

//typedef unsigned long 		ULong;
//typedef unsigned long long 	UInt;
typedef unsigned int 		UInt;
typedef unsigned short 		UShort;
typedef unsigned char 		UInt8;

typedef std::vector<Handle>     HandleVec;
typedef std::vector<Int>	IntVec;
typedef std::vector<Short>	ShortVec;
typedef std::vector<Int8>       Int8Vec;
typedef std::vector<UInt>     	UIntVec;
typedef std::vector<UShort>	UShortVec;
typedef std::vector<UInt8>	UInt8Vec;
typedef std::vector<Float>	FloatVec;
typedef std::vector<Double>	DoubleVec;

typedef std::set<Handle>	HandleSet;
typedef std::set<Int>		IntSet;
typedef std::set<Short>		ShortSet;
typedef std::set<Int8>		Int8Set;
typedef std::set<UInt>		UIntSet;
typedef std::set<UShort>	UShortSet;
typedef std::set<UInt8>		UInt8Set;
typedef std::set<Float>		FloatSet;
typedef std::set<Double>	DoubleSet;

typedef string 		String;
#endif /* __TYPES_H */
