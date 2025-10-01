#ifndef _java_util_HashMap_h_
#define _java_util_HashMap_h_
//$ class java.util.HashMap
//$ extends java.util.AbstractMap
//$ implements java.lang.Cloneable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <java/util/AbstractMap.h>

#pragma push_macro("UNTREEIFY_THRESHOLD")
#undef UNTREEIFY_THRESHOLD
#pragma push_macro("TREEIFY_THRESHOLD")
#undef TREEIFY_THRESHOLD
#pragma push_macro("DEFAULT_LOAD_FACTOR")
#undef DEFAULT_LOAD_FACTOR
#pragma push_macro("DEFAULT_INITIAL_CAPACITY")
#undef DEFAULT_INITIAL_CAPACITY
#pragma push_macro("MAXIMUM_CAPACITY")
#undef MAXIMUM_CAPACITY
#pragma push_macro("MIN_TREEIFY_CAPACITY")
#undef MIN_TREEIFY_CAPACITY

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Collection;
		class HashMap$Node;
		class HashMap$TreeNode;
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
			class BiFunction;
			class Function;
		}
	}
}

namespace java {
	namespace util {

class $export HashMap : public ::java::util::AbstractMap, public ::java::lang::Cloneable, public ::java::io::Serializable {
	$class(HashMap, $PRELOAD, ::java::util::AbstractMap, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	HashMap();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t initialCapacity, float loadFactor);
	void init$(int32_t initialCapacity);
	void init$();
	void init$(::java::util::Map* m);
	virtual void afterNodeAccess(::java::util::HashMap$Node* p);
	virtual void afterNodeInsertion(bool evict);
	virtual void afterNodeRemoval(::java::util::HashMap$Node* p);
	int32_t capacity();
	virtual void clear() override;
	virtual $Object* clone() override;
	static $Class* comparableClassFor(Object$* x);
	static int32_t compareComparables($Class* kc, Object$* k, Object$* x);
	virtual $Object* compute(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual $Object* computeIfAbsent(Object$* key, ::java::util::function::Function* mappingFunction) override;
	virtual $Object* computeIfPresent(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual bool containsKey(Object$* key) override;
	virtual bool containsValue(Object$* value) override;
	virtual ::java::util::Set* entrySet() override;
	virtual void forEach(::java::util::function::BiConsumer* action) override;
	virtual $Object* get(Object$* key) override;
	::java::util::HashMap$Node* getNode(Object$* key);
	virtual $Object* getOrDefault(Object$* key, Object$* defaultValue) override;
	static int32_t hash(Object$* key);
	virtual void internalWriteEntries(::java::io::ObjectOutputStream* s);
	virtual bool isEmpty() override;
	virtual ::java::util::Set* keySet() override;
	virtual $ObjectArray* keysToArray($ObjectArray* a);
	float loadFactor();
	virtual $Object* merge(Object$* key, Object$* value, ::java::util::function::BiFunction* remappingFunction) override;
	virtual ::java::util::HashMap$Node* newNode(int32_t hash, Object$* key, Object$* value, ::java::util::HashMap$Node* next);
	virtual ::java::util::HashMap$TreeNode* newTreeNode(int32_t hash, Object$* key, Object$* value, ::java::util::HashMap$Node* next);
	$ObjectArray* prepareArray($ObjectArray* a);
	virtual $Object* put(Object$* key, Object$* value) override;
	virtual void putAll(::java::util::Map* m) override;
	virtual $Object* putIfAbsent(Object$* key, Object$* value) override;
	void putMapEntries(::java::util::Map* m, bool evict);
	$Object* putVal(int32_t hash, Object$* key, Object$* value, bool onlyIfAbsent, bool evict);
	void readObject(::java::io::ObjectInputStream* s);
	virtual void reinitialize();
	virtual $Object* remove(Object$* key) override;
	virtual bool remove(Object$* key, Object$* value) override;
	::java::util::HashMap$Node* removeNode(int32_t hash, Object$* key, Object$* value, bool matchValue, bool movable);
	virtual bool replace(Object$* key, Object$* oldValue, Object$* newValue) override;
	virtual $Object* replace(Object$* key, Object$* value) override;
	virtual void replaceAll(::java::util::function::BiFunction* function) override;
	virtual ::java::util::HashMap$Node* replacementNode(::java::util::HashMap$Node* p, ::java::util::HashMap$Node* next);
	virtual ::java::util::HashMap$TreeNode* replacementTreeNode(::java::util::HashMap$Node* p, ::java::util::HashMap$Node* next);
	$Array<::java::util::HashMap$Node>* resize();
	virtual int32_t size() override;
	static int32_t tableSizeFor(int32_t cap);
	virtual $String* toString() override;
	void treeifyBin($Array<::java::util::HashMap$Node>* tab, int32_t hash);
	virtual ::java::util::Collection* values() override;
	virtual $ObjectArray* valuesToArray($ObjectArray* a);
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0x0507DAC1C31660D1;
	static const int32_t DEFAULT_INITIAL_CAPACITY = 16; // 1 << 4
	static const int32_t MAXIMUM_CAPACITY = 0x40000000; // 1 << 30
	static float DEFAULT_LOAD_FACTOR;
	static const int32_t TREEIFY_THRESHOLD = 8;
	static const int32_t UNTREEIFY_THRESHOLD = 6;
	static const int32_t MIN_TREEIFY_CAPACITY = 64;
	$Array<::java::util::HashMap$Node>* table = nullptr;
	::java::util::Set* entrySet$ = nullptr;
	int32_t size$ = 0;
	int32_t modCount = 0;
	int32_t threshold = 0;
	float loadFactor$ = 0.0;
};

	} // util
} // java

#pragma pop_macro("UNTREEIFY_THRESHOLD")
#pragma pop_macro("TREEIFY_THRESHOLD")
#pragma pop_macro("DEFAULT_LOAD_FACTOR")
#pragma pop_macro("DEFAULT_INITIAL_CAPACITY")
#pragma pop_macro("MAXIMUM_CAPACITY")
#pragma pop_macro("MIN_TREEIFY_CAPACITY")

#endif // _java_util_HashMap_h_