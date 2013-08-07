#	Default converters 
# 	Special Type Markers
#		_array_array_type								Array of array type
#		_object_array_type		 							Object array type
#		_byte_array_type									byte array type
#		_short_array_type									short array type
#		_int_array_type										int array type
#		_long_array_type									long array type
#		_float_array_type									float array type
#		_double_array_type									double array type
#		_boolean_array_type									boolean array type
#		_char_array_type									char array type

config = {
	"converters" : [
		{
			"name"		:	"convert_void",
			"java"		: 	{ 
								"type" : "void",
							},
			"cxx"		:	{
								"type" : "void",
							},
		},
		{
			"name"		:	"convert_boolean",
			"java"		: 	{ 
								"type" : "boolean",
							},
			"cxx"		:	{
								"type" : "bool",
							},
		},
		{
			"name"		: 	"convert_byte",
			"java"		:	{ 
								"type" : "byte",
							},
			"cxx"		:	{ 
								"type" : "byte",
							}
		},
		{
			"name"		:	"convert_char",
			"java"		:	{ 
								"type" : "char", 
							},
			"cxx"		:	{ 
								"type" : "char",
							},
		},
		{
			"name"		: 	"convert_short",
			"java"		:	{ 
								"type" : "short",
							},
			"cxx"		:	{ 
								"type" : "short",
							},
		},
		{
			"name"		: 	"convert_int",
			"java"		:	{ 
								"type" : "int", 
							},
			"cxx"		:	{
								"type" : "int",
							},
		},
		{
			"name"		:	"convert_long",
			"java"		:	{ 
								"type" : "long", 
							},
			"cxx"		:	{ 
								"type" : "long",
							}
		},
		{
			"name"		:	"convert_float",
			"java"		:	{ 
								"type" : "float", 
							},
			"cxx"		:	{
								"type" : "float",
							},
		},
		{
			"name"		:	"convert_double",
			"java"		:	{ 
								"type" : "double",
							},
			"cxx"		:	{
								"type" : "double",
							},
		},
		{
			"name"					:	"convert__boolean_array_type",
			"java"					:	{
											"type"	:	"_boolean_array_type",
										},
			"cxx"					:	{
											"type"	: "std::vector<bool>",
										},
		},
		{
			"name"					:	"convert__byte_array_type",
			"java"					:	{
											"type"	:	"_byte_array_type",
										},
			"cxx"					:	{
											"type"	: "std::vector<byte>",
										},
		},
		{
			"name"					:	"convert__char_array_type",
			"java"					:	{
											"type"	:	"_char_array_type",
										},
			"cxx"					:	{
											"type"	: "std::vector<char>",
										},
		},		
		{
			"name"					:	"convert__short_array_type",
			"java"					:	{
											"type"	:	"_short_array_type",
										},
			"cxx"					:	{
											"type"	: "std::vector<short>",
										},
		},
		{
			"name"					:	"convert__int_array_type",
			"java"					:	{
											"type"	:	"_int_array_type",
										},
			"cxx"					:	{
											"type"	: "std::vector<int>",
										},
		},
		{
			"name"					:	"convert__long_array_type",
			"java"					:	{
											"type"	:	"_long_array_type",
										},
			"cxx"					:	{
											"type"	: "std::vector<long>",
										},
		},
		{
			"name"					:	"convert__float_array_type",
			"java"					:	{
											"type"	:	"_float_array_type",
										},
			"cxx"					:	{
											"type"	: "std::vector<float>",
										},
		},
		{
			"name"					:	"convert__double_array_type",
			"java"					:	{
											"type"	:	"_double_array_type",
										},
			"cxx"					:	{
											"type"	: "std::vector<double>",
										},
		},
	],
}