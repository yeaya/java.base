#ifndef _java_util_concurrent_ConcurrentHashMap$Node_h_
#define _java_util_concurrent_ConcurrentHashMap$Node_h_
//$ class java.util.concurrent.ConcurrentHashMap$Node
//$ extends java.util.Map$Entry

#include <java/util/Map$Entry.h>

namespace java {
	namespace util {
		namespace concurrent {

class $import ConcurrentHashMap$Node : public ::java::util::Map$Entry {
	$class(ConcurrentHashMap$Node, $PRELOAD | $NO_CLASS_INIT, ::java::util::Map$Entry)
public:
	ConcurrentHashMap$Node();
	void init$(int32_t hash, Object$* key, Object$* val);
	void init$(int32_t hash, Object$* key, Object$* val, ::java::util::concurrent::ConcurrentHashMap$Node* next);
	virtual bool equals(Object$* o) override;
	virtual ::java::util::concurrent::ConcurrentHashMap$Node* find(int32_t h, Object$* k);
	virtual $Object* getKey() override;
	virtual $Object* getValue() override;
	virtual int32_t hashCode() override;
	virtual $Object* setValue(Object$* value) override;
	virtual $String* toString() override;
	int32_t hash = 0;
	$Object* key = nullptr;
	$volatile($Object*) val = nullptr;
	$volatile(::java::util::concurrent::ConcurrentHashMap$Node*) next = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$Node_h_