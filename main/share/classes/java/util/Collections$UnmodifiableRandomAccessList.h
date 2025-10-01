#ifndef _java_util_Collections$UnmodifiableRandomAccessList_h_
#define _java_util_Collections$UnmodifiableRandomAccessList_h_
//$ class java.util.Collections$UnmodifiableRandomAccessList
//$ extends java.util.Collections$UnmodifiableList
//$ implements java.util.RandomAccess

#include <java/util/Collections$UnmodifiableList.h>
#include <java/util/RandomAccess.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace util {

class $export Collections$UnmodifiableRandomAccessList : public ::java::util::Collections$UnmodifiableList, public ::java::util::RandomAccess {
	$class(Collections$UnmodifiableRandomAccessList, $NO_CLASS_INIT, ::java::util::Collections$UnmodifiableList, ::java::util::RandomAccess)
public:
	Collections$UnmodifiableRandomAccessList();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::Collections$UnmodifiableList::add;
	using ::java::util::Collections$UnmodifiableList::addAll;
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::List* list);
	using ::java::util::Collections$UnmodifiableList::remove;
	virtual ::java::util::List* subList(int32_t fromIndex, int32_t toIndex) override;
	virtual $String* toString() override;
	$Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0xDCB7E7951F48464F;
};

	} // util
} // java

#endif // _java_util_Collections$UnmodifiableRandomAccessList_h_