﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.Shader
struct Shader_t2430389951;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShowSelected
struct  ShowSelected_t1958730300  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Shader ShowSelected::selectedShader
	Shader_t2430389951 * ___selectedShader_2;
	// UnityEngine.Color ShowSelected::outterColor
	Color_t2020392075  ___outterColor_3;
	// UnityEngine.Color ShowSelected::myColor
	Color_t2020392075  ___myColor_4;
	// UnityEngine.Shader ShowSelected::myShader
	Shader_t2430389951 * ___myShader_5;
	// System.Boolean ShowSelected::Selected
	bool ___Selected_6;

public:
	inline static int32_t get_offset_of_selectedShader_2() { return static_cast<int32_t>(offsetof(ShowSelected_t1958730300, ___selectedShader_2)); }
	inline Shader_t2430389951 * get_selectedShader_2() const { return ___selectedShader_2; }
	inline Shader_t2430389951 ** get_address_of_selectedShader_2() { return &___selectedShader_2; }
	inline void set_selectedShader_2(Shader_t2430389951 * value)
	{
		___selectedShader_2 = value;
		Il2CppCodeGenWriteBarrier(&___selectedShader_2, value);
	}

	inline static int32_t get_offset_of_outterColor_3() { return static_cast<int32_t>(offsetof(ShowSelected_t1958730300, ___outterColor_3)); }
	inline Color_t2020392075  get_outterColor_3() const { return ___outterColor_3; }
	inline Color_t2020392075 * get_address_of_outterColor_3() { return &___outterColor_3; }
	inline void set_outterColor_3(Color_t2020392075  value)
	{
		___outterColor_3 = value;
	}

	inline static int32_t get_offset_of_myColor_4() { return static_cast<int32_t>(offsetof(ShowSelected_t1958730300, ___myColor_4)); }
	inline Color_t2020392075  get_myColor_4() const { return ___myColor_4; }
	inline Color_t2020392075 * get_address_of_myColor_4() { return &___myColor_4; }
	inline void set_myColor_4(Color_t2020392075  value)
	{
		___myColor_4 = value;
	}

	inline static int32_t get_offset_of_myShader_5() { return static_cast<int32_t>(offsetof(ShowSelected_t1958730300, ___myShader_5)); }
	inline Shader_t2430389951 * get_myShader_5() const { return ___myShader_5; }
	inline Shader_t2430389951 ** get_address_of_myShader_5() { return &___myShader_5; }
	inline void set_myShader_5(Shader_t2430389951 * value)
	{
		___myShader_5 = value;
		Il2CppCodeGenWriteBarrier(&___myShader_5, value);
	}

	inline static int32_t get_offset_of_Selected_6() { return static_cast<int32_t>(offsetof(ShowSelected_t1958730300, ___Selected_6)); }
	inline bool get_Selected_6() const { return ___Selected_6; }
	inline bool* get_address_of_Selected_6() { return &___Selected_6; }
	inline void set_Selected_6(bool value)
	{
		___Selected_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
