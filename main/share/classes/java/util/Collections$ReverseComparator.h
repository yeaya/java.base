#ifndef _java_util_Collections$ReverseComparator_h_
#define _java_util_Collections$ReverseComparator_h_
//$ class java.util.Collections$ReverseComparator
//$ extends java.util.Comparator
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/util/Comparator.h>

#pragma push_macro("REVERSE_ORDER")
#undef REVERSE_ORDER

namespace java {
	namespace lang {
		class Comparable;
	}
}

namespace java {
	namespace util {

class Collections$ReverseComparator : public ::java::util::Comparator, public ::java::io::Serializable {
	$class(Collections$ReverseComparator, 0, ::java::util::Comparator, ::java::io::Serializable)
public:
	Collections$ReverseComparator();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual int32_t compare(::java::lang::Comparable* c1, ::java::lang::Comparable* c2);
	virtual int32_t compare(Object$* c1, Object$* c2) override;
	$Object* readResolve();
	virtual ::java::util::Comparator* reversed() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x64048AF0534E4AD0;
	static ::java::util::Collections$ReverseComparator* REVERSE_ORDER;
};

	} // util
} // java

#pragma pop_macro("REVERSE_ORDER")

#endif // _java_util_Collections$ReverseComparator_h_