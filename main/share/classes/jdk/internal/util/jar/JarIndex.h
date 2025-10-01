#ifndef _jdk_internal_util_jar_JarIndex_h_
#define _jdk_internal_util_jar_JarIndex_h_
//$ class jdk.internal.util.jar.JarIndex
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INDEX_NAME")
#undef INDEX_NAME

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace util {
		class HashMap;
		class LinkedList;
	}
}
namespace java {
	namespace util {
		namespace jar {
			class JarFile;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace util {
			namespace jar {

class $export JarIndex : public ::java::lang::Object {
	$class(JarIndex, 0, ::java::lang::Object)
public:
	JarIndex();
	void init$();
	void init$(::java::io::InputStream* is);
	void init$($StringArray* files);
	virtual void add($String* fileName, $String* jarName);
	void addMapping($String* jarItem, $String* jarName);
	void addToList($String* key, $String* value, ::java::util::HashMap* t);
	virtual ::java::util::LinkedList* get($String* fileName);
	virtual $StringArray* getJarFiles();
	static ::jdk::internal::util::jar::JarIndex* getJarIndex(::java::util::jar::JarFile* jar);
	virtual void merge(::jdk::internal::util::jar::JarIndex* toIndex, $String* path);
	void parseJars($StringArray* files);
	virtual void read(::java::io::InputStream* is);
	virtual void write(::java::io::OutputStream* out);
	::java::util::HashMap* indexMap = nullptr;
	::java::util::HashMap* jarMap = nullptr;
	$StringArray* jarFiles = nullptr;
	static $String* INDEX_NAME;
	static bool metaInfFilenames;
};

			} // jar
		} // util
	} // internal
} // jdk

#pragma pop_macro("INDEX_NAME")

#endif // _jdk_internal_util_jar_JarIndex_h_