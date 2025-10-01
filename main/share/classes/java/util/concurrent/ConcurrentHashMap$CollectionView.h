#ifndef _java_util_concurrent_ConcurrentHashMap$CollectionView_h_
#define _java_util_concurrent_ConcurrentHashMap$CollectionView_h_
//$ class java.util.concurrent.ConcurrentHashMap$CollectionView
//$ extends java.util.Collection
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/util/Collection.h>

#pragma push_macro("OOME_MSG")
#undef OOME_MSG

namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ConcurrentHashMap$CollectionView : public ::java::util::Collection, public ::java::io::Serializable {
	$class(ConcurrentHashMap$CollectionView, 0, ::java::util::Collection, ::java::io::Serializable)
public:
	ConcurrentHashMap$CollectionView();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool contains(Object$* o) override {return false;}
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::concurrent::ConcurrentHashMap* map);
	virtual void clear() override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual ::java::util::concurrent::ConcurrentHashMap* getMap();
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override {return nullptr;}
	virtual bool remove(Object$* o) override {return false;}
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	virtual int32_t size() override;
	using ::java::util::Collection::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x6499DE129D87293D;
	::java::util::concurrent::ConcurrentHashMap* map = nullptr;
	static $String* OOME_MSG;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("OOME_MSG")

#endif // _java_util_concurrent_ConcurrentHashMap$CollectionView_h_