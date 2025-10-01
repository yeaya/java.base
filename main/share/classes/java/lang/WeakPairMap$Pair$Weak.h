#ifndef _java_lang_WeakPairMap$Pair$Weak_h_
#define _java_lang_WeakPairMap$Pair$Weak_h_
//$ class java.lang.WeakPairMap$Pair$Weak
//$ extends java.lang.WeakPairMap$WeakRefPeer
//$ implements java.lang.WeakPairMap$Pair

#include <java/lang/WeakPairMap$Pair.h>
#include <java/lang/WeakPairMap$WeakRefPeer.h>

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}

namespace java {
	namespace lang {

class WeakPairMap$Pair$Weak : public ::java::lang::WeakPairMap$WeakRefPeer, public ::java::lang::WeakPairMap$Pair {
	$class(WeakPairMap$Pair$Weak, $NO_CLASS_INIT, ::java::lang::WeakPairMap$WeakRefPeer, ::java::lang::WeakPairMap$Pair)
public:
	WeakPairMap$Pair$Weak();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(Object$* k1, Object$* k2, ::java::lang::ref::ReferenceQueue* queue);
	virtual bool equals(Object$* obj) override;
	virtual $Object* first() override;
	virtual int32_t hashCode() override;
	virtual $Object* second() override;
	virtual $String* toString() override;
	virtual ::java::lang::WeakPairMap$Pair$Weak* weakPair() override;
	int32_t hash = 0;
	::java::lang::WeakPairMap$WeakRefPeer* peer = nullptr;
};

	} // lang
} // java

#endif // _java_lang_WeakPairMap$Pair$Weak_h_