#ifndef _java_util_jar_Manifest_h_
#define _java_util_jar_Manifest_h_
//$ class java.util.jar.Manifest
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace java {
	namespace util {
		namespace jar {
			class Attributes;
			class JarVerifier;
		}
	}
}

namespace java {
	namespace util {
		namespace jar {

class $export Manifest : public ::java::lang::Cloneable {
	$class(Manifest, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	Manifest();
	void init$();
	void init$(::java::io::InputStream* is);
	void init$(::java::io::InputStream* is, $String* jarFilename);
	void init$(::java::util::jar::JarVerifier* jv, ::java::io::InputStream* is, $String* jarFilename);
	void init$(::java::util::jar::Manifest* man);
	virtual void clear();
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	virtual ::java::util::jar::Attributes* getAttributes($String* name);
	virtual ::java::util::Map* getEntries();
	static $String* getErrorPosition($String* filename, int32_t lineNumber);
	virtual ::java::util::jar::Attributes* getMainAttributes();
	virtual ::java::util::jar::Attributes* getTrustedAttributes($String* name);
	virtual int32_t hashCode() override;
	static void make72Safe(::java::lang::StringBuffer* line);
	$String* parseName($bytes* lbuf, int32_t len);
	static void println(::java::io::OutputStream* out);
	static void println72(::java::io::OutputStream* out, $String* line);
	virtual void read(::java::io::InputStream* is);
	void read(::java::io::InputStream* is, $String* jarFilename);
	int32_t toLower(int32_t c);
	virtual void write(::java::io::OutputStream* out);
	::java::util::jar::Attributes* attr = nullptr;
	::java::util::Map* entries = nullptr;
	::java::util::jar::JarVerifier* jv = nullptr;
};

		} // jar
	} // util
} // java

#endif // _java_util_jar_Manifest_h_