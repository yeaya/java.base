#ifndef _sun_util_PreHashedMap$2$1$1_h_
#define _sun_util_PreHashedMap$2$1$1_h_
//$ class sun.util.PreHashedMap$2$1$1
//$ extends java.util.Map$Entry

#include <java/util/Map$Entry.h>

namespace sun {
	namespace util {
		class PreHashedMap$2$1;
	}
}

namespace sun {
	namespace util {

class PreHashedMap$2$1$1 : public ::java::util::Map$Entry {
	$class(PreHashedMap$2$1$1, $NO_CLASS_INIT, ::java::util::Map$Entry)
public:
	PreHashedMap$2$1$1();
	void init$(::sun::util::PreHashedMap$2$1* this$2);
	virtual bool equals(Object$* ob) override;
	virtual $Object* getKey() override;
	virtual $Object* getValue() override;
	virtual int32_t hashCode() override;
	virtual $Object* setValue(Object$* v) override;
	::sun::util::PreHashedMap$2$1* this$2 = nullptr;
	$String* k = nullptr;
};

	} // util
} // sun

#endif // _sun_util_PreHashedMap$2$1$1_h_