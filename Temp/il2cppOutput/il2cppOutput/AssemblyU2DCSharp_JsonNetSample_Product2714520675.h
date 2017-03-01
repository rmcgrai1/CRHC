#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_Decimal724701077.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JsonNetSample/Product
struct  Product_t2714520675  : public Il2CppObject
{
public:
	// System.String JsonNetSample/Product::Name
	String_t* ___Name_0;
	// System.DateTime JsonNetSample/Product::ExpiryDate
	DateTime_t693205669  ___ExpiryDate_1;
	// System.Decimal JsonNetSample/Product::Price
	Decimal_t724701077  ___Price_2;
	// System.String[] JsonNetSample/Product::Sizes
	StringU5BU5D_t1642385972* ___Sizes_3;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(Product_t2714520675, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier(&___Name_0, value);
	}

	inline static int32_t get_offset_of_ExpiryDate_1() { return static_cast<int32_t>(offsetof(Product_t2714520675, ___ExpiryDate_1)); }
	inline DateTime_t693205669  get_ExpiryDate_1() const { return ___ExpiryDate_1; }
	inline DateTime_t693205669 * get_address_of_ExpiryDate_1() { return &___ExpiryDate_1; }
	inline void set_ExpiryDate_1(DateTime_t693205669  value)
	{
		___ExpiryDate_1 = value;
	}

	inline static int32_t get_offset_of_Price_2() { return static_cast<int32_t>(offsetof(Product_t2714520675, ___Price_2)); }
	inline Decimal_t724701077  get_Price_2() const { return ___Price_2; }
	inline Decimal_t724701077 * get_address_of_Price_2() { return &___Price_2; }
	inline void set_Price_2(Decimal_t724701077  value)
	{
		___Price_2 = value;
	}

	inline static int32_t get_offset_of_Sizes_3() { return static_cast<int32_t>(offsetof(Product_t2714520675, ___Sizes_3)); }
	inline StringU5BU5D_t1642385972* get_Sizes_3() const { return ___Sizes_3; }
	inline StringU5BU5D_t1642385972** get_address_of_Sizes_3() { return &___Sizes_3; }
	inline void set_Sizes_3(StringU5BU5D_t1642385972* value)
	{
		___Sizes_3 = value;
		Il2CppCodeGenWriteBarrier(&___Sizes_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
