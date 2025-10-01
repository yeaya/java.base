#ifndef _java_util_Collections$CheckedCollection$1_h_
#define _java_util_Collections$CheckedCollection$1_h_
//$ class java.util.Collections$CheckedCollection$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class Collections$CheckedCollection;
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

class Collections$CheckedCollection$1 : public ::java::util::Iterator {
	$class(Collections$CheckedCollection$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	Collections$CheckedCollection$1();
	void init$(::java::util::Collections$CheckedCollection* this$0, ::java::util::Iterator* val$it);
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::Collections$CheckedCollection* this$0 = nullptr;
	::java::util::Iterator* val$it = nullptr;
};

	} // util
} // java

#endif // _java_util_Collections$CheckedCollection$1_h_