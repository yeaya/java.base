#ifndef _java_util_jar_JarOutputStream_h_
#define _java_util_jar_JarOutputStream_h_
//$ class java.util.jar.JarOutputStream
//$ extends java.util.zip.ZipOutputStream

#include <java/lang/Array.h>
#include <java/util/zip/ZipOutputStream.h>

#pragma push_macro("JAR_MAGIC")
#undef JAR_MAGIC

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace util {
		namespace jar {
			class Manifest;
		}
	}
}
namespace java {
	namespace util {
		namespace zip {
			class ZipEntry;
		}
	}
}

namespace java {
	namespace util {
		namespace jar {

class $export JarOutputStream : public ::java::util::zip::ZipOutputStream {
	$class(JarOutputStream, $NO_CLASS_INIT, ::java::util::zip::ZipOutputStream)
public:
	JarOutputStream();
	void init$(::java::io::OutputStream* out, ::java::util::jar::Manifest* man);
	void init$(::java::io::OutputStream* out);
	static int32_t get16($bytes* b, int32_t off);
	static bool hasMagic($bytes* edata);
	virtual void putNextEntry(::java::util::zip::ZipEntry* ze) override;
	static void set16($bytes* b, int32_t off, int32_t value);
	using ::java::util::zip::ZipOutputStream::write;
	static const int32_t JAR_MAGIC = 0x0000CAFE;
	bool firstEntry = false;
};

		} // jar
	} // util
} // java

#pragma pop_macro("JAR_MAGIC")

#endif // _java_util_jar_JarOutputStream_h_