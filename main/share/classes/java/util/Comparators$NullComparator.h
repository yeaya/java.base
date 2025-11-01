#ifndef _java_util_Comparators$NullComparator_h_
#define _java_util_Comparators$NullComparator_h_
//$ class java.util.Comparators$NullComparator
//$ extends java.util.Comparator
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/util/Comparator.h>

namespace java {
	namespace util {

class Comparators$NullComparator : public ::java::util::Comparator, public ::java::io::Serializable {
	$class(Comparators$NullComparator, $NO_CLASS_INIT, ::java::util::Comparator, ::java::io::Serializable)
public:
	Comparators$NullComparator();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(bool nullFirst, ::java::util::Comparator* real);
	virtual int32_t compare(Object$* a, Object$* b) override;
	virtual ::java::util::Comparator* reversed() override;
	using ::java::util::Comparator::thenComparing;
	virtual ::java::util::Comparator* thenComparing(::java::util::Comparator* other) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x96F39D4DB70ADE48;
	bool nullFirst = false;
	::java::util::Comparator* real = nullptr;
};

	} // util
} // java

#endif // _java_util_Comparators$NullComparator_h_