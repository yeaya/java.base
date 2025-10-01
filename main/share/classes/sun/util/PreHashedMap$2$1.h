#ifndef _sun_util_PreHashedMap$2$1_h_
#define _sun_util_PreHashedMap$2$1_h_
//$ class sun.util.PreHashedMap$2$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace sun {
	namespace util {
		class PreHashedMap$2;
	}
}

namespace sun {
	namespace util {

class PreHashedMap$2$1 : public ::java::util::Iterator {
	$class(PreHashedMap$2$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	PreHashedMap$2$1();
	void init$(::sun::util::PreHashedMap$2* this$1);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::sun::util::PreHashedMap$2* this$1 = nullptr;
	::java::util::Iterator* i = nullptr;
};

	} // util
} // sun

#endif // _sun_util_PreHashedMap$2$1_h_