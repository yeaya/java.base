#ifndef _java_util_Locale$LanguageRange_h_
#define _java_util_Locale$LanguageRange_h_
//$ class java.util.Locale$LanguageRange
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("MAX_WEIGHT")
#undef MAX_WEIGHT
#pragma push_macro("MIN_WEIGHT")
#undef MIN_WEIGHT

namespace java {
	namespace util {
		class List;
		class Map;
	}
}

namespace java {
	namespace util {

class $export Locale$LanguageRange : public ::java::lang::Object {
	$class(Locale$LanguageRange, 0, ::java::lang::Object)
public:
	Locale$LanguageRange();
	void init$($String* range);
	void init$($String* range, double weight);
	virtual bool equals(Object$* obj) override;
	$String* getRange();
	double getWeight();
	virtual int32_t hashCode() override;
	static bool isSubtagIllFormed($String* subtag, bool isFirstSubtag);
	static ::java::util::List* mapEquivalents(::java::util::List* priorityList, ::java::util::Map* map);
	static ::java::util::List* parse($String* ranges);
	static ::java::util::List* parse($String* ranges, ::java::util::Map* map);
	virtual $String* toString() override;
	static double MAX_WEIGHT;
	static double MIN_WEIGHT;
	$String* range = nullptr;
	double weight = 0.0;
	$volatile(int32_t) hash = 0;
};

	} // util
} // java

#pragma pop_macro("MAX_WEIGHT")
#pragma pop_macro("MIN_WEIGHT")

#endif // _java_util_Locale$LanguageRange_h_