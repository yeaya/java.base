#ifndef _jdk_internal_jmod_JmodFile_h_
#define _jdk_internal_jmod_JmodFile_h_
//$ class jdk.internal.jmod.JmodFile
//$ extends java.lang.AutoCloseable

#include <java/lang/Array.h>
#include <java/lang/AutoCloseable.h>

#pragma push_macro("JMOD_MINOR_VERSION")
#undef JMOD_MINOR_VERSION
#pragma push_macro("JMOD_MAGIC_NUMBER")
#undef JMOD_MAGIC_NUMBER
#pragma push_macro("JMOD_MAJOR_VERSION")
#undef JMOD_MAJOR_VERSION

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}
namespace java {
	namespace util {
		namespace zip {
			class ZipFile;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace jmod {
			class JmodFile$Entry;
			class JmodFile$Section;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jmod {

class $import JmodFile : public ::java::lang::AutoCloseable {
	$class(JmodFile, 0, ::java::lang::AutoCloseable)
public:
	JmodFile();
	void init$(::java::nio::file::Path* file);
	static void checkMagic(::java::nio::file::Path* file);
	virtual void close() override;
	virtual ::jdk::internal::jmod::JmodFile$Entry* getEntry(::jdk::internal::jmod::JmodFile$Section* section, $String* name);
	virtual ::java::io::InputStream* getInputStream(::jdk::internal::jmod::JmodFile$Section* section, $String* name);
	virtual ::java::io::InputStream* getInputStream(::jdk::internal::jmod::JmodFile$Entry* entry);
	virtual ::java::util::stream::Stream* stream();
	static void writeMagicNumber(::java::io::OutputStream* os);
	static const int32_t JMOD_MAJOR_VERSION = 1;
	static const int32_t JMOD_MINOR_VERSION = 0;
	static $bytes* JMOD_MAGIC_NUMBER;
	::java::nio::file::Path* file = nullptr;
	::java::util::zip::ZipFile* zipfile = nullptr;
};

		} // jmod
	} // internal
} // jdk

#pragma pop_macro("JMOD_MINOR_VERSION")
#pragma pop_macro("JMOD_MAGIC_NUMBER")
#pragma pop_macro("JMOD_MAJOR_VERSION")

#endif // _jdk_internal_jmod_JmodFile_h_