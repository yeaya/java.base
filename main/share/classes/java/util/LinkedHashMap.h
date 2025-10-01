#ifndef _java_util_LinkedHashMap_h_
#define _java_util_LinkedHashMap_h_
//$ class java.util.LinkedHashMap
//$ extends java.util.HashMap

#include <java/lang/Array.h>
#include <java/util/HashMap.h>

namespace java {
	namespace io {
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Collection;
		class HashMap$Node;
		class HashMap$TreeNode;
		class LinkedHashMap$Entry;
		class Map;
		class Map$Entry;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
			class BiFunction;
		}
	}
}

namespace java {
	namespace util {

class $export LinkedHashMap : public ::java::util::HashMap {
	$class(LinkedHashMap, $PRELOAD | $NO_CLASS_INIT, ::java::util::HashMap)
public:
	LinkedHashMap();
	void init$(int32_t initialCapacity, float loadFactor);
	void init$(int32_t initialCapacity);
	void init$();
	void init$(::java::util::Map* m);
	void init$(int32_t initialCapacity, float loadFactor, bool accessOrder);
	virtual void afterNodeAccess(::java::util::HashMap$Node* e) override;
	virtual void afterNodeInsertion(bool evict) override;
	virtual void afterNodeRemoval(::java::util::HashMap$Node* e) override;
	virtual void clear() override;
	virtual bool containsValue(Object$* value) override;
	virtual ::java::util::Set* entrySet() override;
	virtual void forEach(::java::util::function::BiConsumer* action) override;
	virtual $Object* get(Object$* key) override;
	virtual $Object* getOrDefault(Object$* key, Object$* defaultValue) override;
	virtual void internalWriteEntries(::java::io::ObjectOutputStream* s) override;
	virtual ::java::util::Set* keySet() override;
	virtual $ObjectArray* keysToArray($ObjectArray* a) override;
	void linkNodeLast(::java::util::LinkedHashMap$Entry* p);
	virtual ::java::util::HashMap$Node* newNode(int32_t hash, Object$* key, Object$* value, ::java::util::HashMap$Node* e) override;
	virtual ::java::util::HashMap$TreeNode* newTreeNode(int32_t hash, Object$* key, Object$* value, ::java::util::HashMap$Node* next) override;
	virtual void reinitialize() override;
	virtual bool removeEldestEntry(::java::util::Map$Entry* eldest);
	virtual void replaceAll(::java::util::function::BiFunction* function) override;
	virtual ::java::util::HashMap$Node* replacementNode(::java::util::HashMap$Node* p, ::java::util::HashMap$Node* next) override;
	virtual ::java::util::HashMap$TreeNode* replacementTreeNode(::java::util::HashMap$Node* p, ::java::util::HashMap$Node* next) override;
	void transferLinks(::java::util::LinkedHashMap$Entry* src, ::java::util::LinkedHashMap$Entry* dst);
	virtual ::java::util::Collection* values() override;
	virtual $ObjectArray* valuesToArray($ObjectArray* a) override;
	static const int64_t serialVersionUID = (int64_t)0x34C04E5C106CC0FB;
	::java::util::LinkedHashMap$Entry* head = nullptr;
	::java::util::LinkedHashMap$Entry* tail = nullptr;
	bool accessOrder = false;
};

	} // util
} // java

#endif // _java_util_LinkedHashMap_h_