#ifndef _TestObjectMethods$Relation_h_
#define _TestObjectMethods$Relation_h_
//$ class TestObjectMethods$Relation
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ARRAY")
#undef ARRAY
#pragma push_macro("EQUAL")
#undef EQUAL
#pragma push_macro("OTHER")
#undef OTHER
#pragma push_macro("POSTFIX")
#undef POSTFIX
#pragma push_macro("STRIPPED")
#undef STRIPPED

class TestObjectMethods$Relation : public ::java::lang::Enum {
	$class(TestObjectMethods$Relation, 0, ::java::lang::Enum)
public:
	TestObjectMethods$Relation();
	static $Array<TestObjectMethods$Relation>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::TestObjectMethods$Relation* valueOf($String* name);
	static $Array<TestObjectMethods$Relation>* values();
	static ::TestObjectMethods$Relation* EQUAL;
	static ::TestObjectMethods$Relation* POSTFIX;
	static ::TestObjectMethods$Relation* STRIPPED;
	static ::TestObjectMethods$Relation* ARRAY;
	static ::TestObjectMethods$Relation* OTHER;
	static $Array<TestObjectMethods$Relation>* $VALUES;
};

#pragma pop_macro("ARRAY")
#pragma pop_macro("EQUAL")
#pragma pop_macro("OTHER")
#pragma pop_macro("POSTFIX")
#pragma pop_macro("STRIPPED")

#endif // _TestObjectMethods$Relation_h_