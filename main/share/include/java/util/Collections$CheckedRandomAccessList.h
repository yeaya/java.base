#ifndef _java_util_Collections$CheckedRandomAccessList_h_
#define _java_util_Collections$CheckedRandomAccessList_h_
//$ class java.util.Collections$CheckedRandomAccessList
//$ extends java.util.Collections$CheckedList
//$ implements java.util.RandomAccess

#include <java/util/Collections$CheckedList.h>
#include <java/util/RandomAccess.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace util {

class $import Collections$CheckedRandomAccessList : public ::java::util::Collections$CheckedList, public ::java::util::RandomAccess {
	$class(Collections$CheckedRandomAccessList, $NO_CLASS_INIT, ::java::util::Collections$CheckedList, ::java::util::RandomAccess)
public:
	Collections$CheckedRandomAccessList();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::Collections$CheckedList::add;
	using ::java::util::Collections$CheckedList::addAll;
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::List* list, $Class* type);
	using ::java::util::Collections$CheckedList::remove;
	virtual ::java::util::List* subList(int32_t fromIndex, int32_t toIndex) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x16BC0E55A2D7F2F1;
};

	} // util
} // java

#endif // _java_util_Collections$CheckedRandomAccessList_h_