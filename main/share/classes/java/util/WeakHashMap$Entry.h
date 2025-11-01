#ifndef _java_util_WeakHashMap$Entry_h_
#define _java_util_WeakHashMap$Entry_h_
//$ class java.util.WeakHashMap$Entry
//$ extends java.lang.ref.WeakReference
//$ implements java.util.Map$Entry

#include <java/lang/ref/WeakReference.h>
#include <java/util/Map$Entry.h>

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}

namespace java {
	namespace util {

class WeakHashMap$Entry : public ::java::lang::ref::WeakReference, public ::java::util::Map$Entry {
	$class(WeakHashMap$Entry, $PRELOAD | $NO_CLASS_INIT, ::java::lang::ref::WeakReference, ::java::util::Map$Entry)
public:
	WeakHashMap$Entry();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(Object$* key, Object$* value, ::java::lang::ref::ReferenceQueue* queue, int32_t hash, ::java::util::WeakHashMap$Entry* next);
	virtual bool equals(Object$* o) override;
	virtual $Object* getKey() override;
	virtual $Object* getValue() override;
	virtual int32_t hashCode() override;
	virtual $Object* setValue(Object$* newValue) override;
	virtual $String* toString() override;
	$Object* value = nullptr;
	int32_t hash = 0;
	::java::util::WeakHashMap$Entry* next = nullptr;
};

	} // util
} // java

#endif // _java_util_WeakHashMap$Entry_h_