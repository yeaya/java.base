#ifndef _java_util_Collections$CheckedMap$CheckedEntrySet$1_h_
#define _java_util_Collections$CheckedMap$CheckedEntrySet$1_h_
//$ class java.util.Collections$CheckedMap$CheckedEntrySet$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class Collections$CheckedMap$CheckedEntrySet;
		class Map$Entry;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace java {
	namespace util {

class Collections$CheckedMap$CheckedEntrySet$1 : public ::java::util::Iterator {
	$class(Collections$CheckedMap$CheckedEntrySet$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	Collections$CheckedMap$CheckedEntrySet$1();
	void init$(::java::util::Collections$CheckedMap$CheckedEntrySet* this$0, ::java::util::Iterator* val$i);
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual bool hasNext() override;
	void lambda$forEachRemaining$0(::java::util::function::Consumer* action, ::java::util::Map$Entry* e);
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::Collections$CheckedMap$CheckedEntrySet* this$0 = nullptr;
	::java::util::Iterator* val$i = nullptr;
};

	} // util
} // java

#endif // _java_util_Collections$CheckedMap$CheckedEntrySet$1_h_