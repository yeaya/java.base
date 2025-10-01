#ifndef _java_util_Collections$ReverseComparator2_h_
#define _java_util_Collections$ReverseComparator2_h_
//$ class java.util.Collections$ReverseComparator2
//$ extends java.util.Comparator
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/util/Comparator.h>

namespace java {
	namespace util {

class Collections$ReverseComparator2 : public ::java::util::Comparator, public ::java::io::Serializable {
	$class(Collections$ReverseComparator2, 0, ::java::util::Comparator, ::java::io::Serializable)
public:
	Collections$ReverseComparator2();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::util::Comparator* cmp);
	virtual int32_t compare(Object$* t1, Object$* t2) override;
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual ::java::util::Comparator* reversed() override;
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	static const int64_t serialVersionUID = (int64_t)0x000003FA6C354D51;
	::java::util::Comparator* cmp = nullptr;
};

	} // util
} // java

#endif // _java_util_Collections$ReverseComparator2_h_