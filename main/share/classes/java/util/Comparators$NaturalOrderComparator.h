#ifndef _java_util_Comparators$NaturalOrderComparator_h_
#define _java_util_Comparators$NaturalOrderComparator_h_
//$ class java.util.Comparators$NaturalOrderComparator
//$ extends java.lang.Enum
//$ implements java.util.Comparator

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/util/Comparator.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace lang {
		class Comparable;
	}
}

namespace java {
	namespace util {

class Comparators$NaturalOrderComparator : public ::java::lang::Enum, public ::java::util::Comparator {
	$class(Comparators$NaturalOrderComparator, 0, ::java::lang::Enum, ::java::util::Comparator)
public:
	Comparators$NaturalOrderComparator();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	static $Array<::java::util::Comparators$NaturalOrderComparator>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual int32_t compare(::java::lang::Comparable* c1, ::java::lang::Comparable* c2);
	virtual int32_t compare(Object$* c1, Object$* c2) override;
	virtual ::java::util::Comparator* reversed() override;
	virtual $String* toString() override;
	static ::java::util::Comparators$NaturalOrderComparator* valueOf($String* name);
	static $Array<::java::util::Comparators$NaturalOrderComparator>* values();
	static ::java::util::Comparators$NaturalOrderComparator* INSTANCE;
	static $Array<::java::util::Comparators$NaturalOrderComparator>* $VALUES;
};

	} // util
} // java

#pragma pop_macro("INSTANCE")

#endif // _java_util_Comparators$NaturalOrderComparator_h_