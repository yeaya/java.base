#ifndef _java_util_Collections$SynchronizedRandomAccessList_h_
#define _java_util_Collections$SynchronizedRandomAccessList_h_
//$ class java.util.Collections$SynchronizedRandomAccessList
//$ extends java.util.Collections$SynchronizedList
//$ implements java.util.RandomAccess

#include <java/util/Collections$SynchronizedList.h>
#include <java/util/RandomAccess.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace util {

class $import Collections$SynchronizedRandomAccessList : public ::java::util::Collections$SynchronizedList, public ::java::util::RandomAccess {
	$class(Collections$SynchronizedRandomAccessList, $NO_CLASS_INIT, ::java::util::Collections$SynchronizedList, ::java::util::RandomAccess)
public:
	Collections$SynchronizedRandomAccessList();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::Collections$SynchronizedList::add;
	using ::java::util::Collections$SynchronizedList::addAll;
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::List* list);
	void init$(::java::util::List* list, Object$* mutex);
	using ::java::util::Collections$SynchronizedList::remove;
	virtual ::java::util::List* subList(int32_t fromIndex, int32_t toIndex) override;
	virtual $String* toString() override;
	$Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0x153E0C6C865668D2;
};

	} // util
} // java

#endif // _java_util_Collections$SynchronizedRandomAccessList_h_