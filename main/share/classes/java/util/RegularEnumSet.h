#ifndef _java_util_RegularEnumSet_h_
#define _java_util_RegularEnumSet_h_
//$ class java.util.RegularEnumSet
//$ extends java.util.EnumSet

#include <java/lang/Array.h>
#include <java/util/EnumSet.h>

namespace java {
	namespace lang {
		class Enum;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Iterator;
	}
}

namespace java {
	namespace util {

class RegularEnumSet : public ::java::util::EnumSet {
	$class(RegularEnumSet, $PRELOAD | $NO_CLASS_INIT, ::java::util::EnumSet)
public:
	RegularEnumSet();
	void init$($Class* elementType, $Array<::java::lang::Enum>* universe);
	virtual bool add(::java::lang::Enum* e);
	virtual bool add(Object$* e) override;
	virtual void addAll() override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual void addRange(::java::lang::Enum* from, ::java::lang::Enum* to) override;
	virtual void clear() override;
	virtual void complement() override;
	virtual bool contains(Object$* e) override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual bool equals(Object$* o) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool remove(Object$* e) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	virtual int32_t size() override;
	using ::java::util::EnumSet::toArray;
	static const int64_t serialVersionUID = (int64_t)0x2F586FC77EB0D07E;
	int64_t elements = 0;
};

	} // util
} // java

#endif // _java_util_RegularEnumSet_h_