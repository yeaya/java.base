#ifndef _java_util_Collections$1_h_
#define _java_util_Collections$1_h_
//$ class java.util.Collections$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace java {
	namespace util {

class Collections$1 : public ::java::util::Iterator {
	$class(Collections$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	Collections$1();
	void init$(Object$* val$e);
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	$Object* val$e = nullptr;
	bool hasNext$ = false;
};

	} // util
} // java

#endif // _java_util_Collections$1_h_