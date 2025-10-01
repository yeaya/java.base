#ifndef _java_util_Collections$UnmodifiableCollection$1_h_
#define _java_util_Collections$UnmodifiableCollection$1_h_
//$ class java.util.Collections$UnmodifiableCollection$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class Collections$UnmodifiableCollection;
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

class Collections$UnmodifiableCollection$1 : public ::java::util::Iterator {
	$class(Collections$UnmodifiableCollection$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	Collections$UnmodifiableCollection$1();
	void init$(::java::util::Collections$UnmodifiableCollection* this$0);
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::Collections$UnmodifiableCollection* this$0 = nullptr;
	::java::util::Iterator* i = nullptr;
};

	} // util
} // java

#endif // _java_util_Collections$UnmodifiableCollection$1_h_