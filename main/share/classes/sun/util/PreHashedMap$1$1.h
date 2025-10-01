#ifndef _sun_util_PreHashedMap$1$1_h_
#define _sun_util_PreHashedMap$1$1_h_
//$ class sun.util.PreHashedMap$1$1
//$ extends java.util.Iterator

#include <java/lang/Array.h>
#include <java/util/Iterator.h>

namespace sun {
	namespace util {
		class PreHashedMap$1;
	}
}

namespace sun {
	namespace util {

class PreHashedMap$1$1 : public ::java::util::Iterator {
	$class(PreHashedMap$1$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	PreHashedMap$1$1();
	void init$(::sun::util::PreHashedMap$1* this$1);
	bool findNext();
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::sun::util::PreHashedMap$1* this$1 = nullptr;
	int32_t i = 0;
	$ObjectArray* a = nullptr;
	$String* cur = nullptr;
};

	} // util
} // sun

#endif // _sun_util_PreHashedMap$1$1_h_