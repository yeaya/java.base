#ifndef _java_util_Properties_h_
#define _java_util_Properties_h_
//$ class java.util.Properties
//$ extends java.util.Hashtable

#include <java/lang/Array.h>
#include <java/util/Hashtable.h>

#pragma push_macro("UNSAFE")
#undef UNSAFE

namespace java {
	namespace io {
		class BufferedWriter;
		class InputStream;
		class ObjectInputStream;
		class ObjectOutputStream;
		class OutputStream;
		class PrintStream;
		class PrintWriter;
		class Reader;
		class Writer;
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Enumeration;
		class Map;
		class Properties$LineReader;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
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
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace java {
	namespace util {

class $export Properties : public ::java::util::Hashtable {
	$class(Properties, $PRELOAD, ::java::util::Hashtable)
public:
	Properties();
	void init$();
	void init$(int32_t initialCapacity);
	void init$(::java::util::Properties* defaults);
	void init$(::java::util::Properties* defaults, int32_t initialCapacity);
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual $Object* compute(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual $Object* computeIfAbsent(Object$* key, ::java::util::function::Function* mappingFunction) override;
	virtual $Object* computeIfPresent(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual bool contains(Object$* value) override;
	virtual bool containsKey(Object$* key) override;
	virtual bool containsValue(Object$* value) override;
	virtual ::java::util::Enumeration* elements() override;
	virtual ::java::util::Set* entrySet() override;
	void enumerate(::java::util::Map* h);
	void enumerateStringProperties(::java::util::Map* h);
	virtual bool equals(Object$* o) override;
	virtual void forEach(::java::util::function::BiConsumer* action) override;
	virtual $Object* get(Object$* key) override;
	virtual $Object* getOrDefault(Object$* key, Object$* defaultValue) override;
	virtual $String* getProperty($String* key);
	virtual $String* getProperty($String* key, $String* defaultValue);
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Set* keySet() override;
	virtual ::java::util::Enumeration* keys() override;
	virtual void list(::java::io::PrintStream* out);
	virtual void list(::java::io::PrintWriter* out);
	virtual void load(::java::io::Reader* reader);
	virtual void load(::java::io::InputStream* inStream);
	void load0(::java::util::Properties$LineReader* lr);
	$String* loadConvert($chars* in, int32_t off, int32_t len, ::java::lang::StringBuilder* out);
	virtual void loadFromXML(::java::io::InputStream* in);
	virtual $Object* merge(Object$* key, Object$* value, ::java::util::function::BiFunction* remappingFunction) override;
	virtual ::java::util::Enumeration* propertyNames();
	virtual $Object* put(Object$* key, Object$* value) override;
	virtual void putAll(::java::util::Map* t) override;
	virtual $Object* putIfAbsent(Object$* key, Object$* value) override;
	virtual void readHashtable(::java::io::ObjectInputStream* s) override;
	virtual void rehash() override;
	virtual $Object* remove(Object$* key) override;
	virtual bool remove(Object$* key, Object$* value) override;
	virtual bool replace(Object$* key, Object$* oldValue, Object$* newValue) override;
	virtual $Object* replace(Object$* key, Object$* value) override;
	virtual void replaceAll(::java::util::function::BiFunction* function) override;
	virtual void save(::java::io::OutputStream* out, $String* comments);
	$String* saveConvert($String* theString, bool escapeSpace, bool escapeUnicode);
	virtual $Object* setProperty($String* key, $String* value);
	virtual int32_t size() override;
	virtual void store(::java::io::Writer* writer, $String* comments);
	virtual void store(::java::io::OutputStream* out, $String* comments);
	void store0(::java::io::BufferedWriter* bw, $String* comments, bool escUnicode);
	virtual void storeToXML(::java::io::OutputStream* os, $String* comment);
	virtual void storeToXML(::java::io::OutputStream* os, $String* comment, $String* encoding);
	virtual void storeToXML(::java::io::OutputStream* os, $String* comment, ::java::nio::charset::Charset* charset);
	virtual ::java::util::Set* stringPropertyNames();
	virtual $String* toString() override;
	virtual ::java::util::Collection* values() override;
	static void writeComments(::java::io::BufferedWriter* bw, $String* comments);
	virtual void writeHashtable(::java::io::ObjectOutputStream* s) override;
	static const int64_t serialVersionUID = (int64_t)0x3912D07A70363E98;
	static ::jdk::internal::misc::Unsafe* UNSAFE;
	$volatile(::java::util::Properties*) defaults = nullptr;
	$volatile(::java::util::concurrent::ConcurrentHashMap*) map = nullptr;
};

	} // util
} // java

#pragma pop_macro("UNSAFE")

#endif // _java_util_Properties_h_