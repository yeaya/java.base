#ifndef _java_util_Collections$UnmodifiableSet_h_
#define _java_util_Collections$UnmodifiableSet_h_
//$ class java.util.Collections$UnmodifiableSet
//$ extends java.util.Collections$UnmodifiableCollection
//$ implements java.util.Set

#include <java/util/Collections$UnmodifiableCollection.h>
#include <java/util/Set.h>

namespace java {
	namespace util {

class $export Collections$UnmodifiableSet : public ::java::util::Collections$UnmodifiableCollection, public ::java::util::Set {
	$class(Collections$UnmodifiableSet, $PRELOAD | $NO_CLASS_INIT, ::java::util::Collections$UnmodifiableCollection, ::java::util::Set)
public:
	Collections$UnmodifiableSet();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool add(Object$* e) override;
	virtual bool addAll(::java::util::Collection* coll) override;
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool contains(Object$* o) override;
	virtual bool containsAll(::java::util::Collection* coll) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	void init$(::java::util::Set* s);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual ::java::util::stream::Stream* parallelStream() override;
	virtual bool remove(Object$* o) override;
	virtual bool removeAll(::java::util::Collection* coll) override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual bool retainAll(::java::util::Collection* coll) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* f) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x801D92D18F9B8055;
};

	} // util
} // java

#endif // _java_util_Collections$UnmodifiableSet_h_