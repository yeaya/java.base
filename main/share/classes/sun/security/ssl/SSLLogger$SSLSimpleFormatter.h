#ifndef _sun_security_ssl_SSLLogger$SSLSimpleFormatter_h_
#define _sun_security_ssl_SSLLogger$SSLSimpleFormatter_h_
//$ class sun.security.ssl.SSLLogger$SSLSimpleFormatter
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("PATTERN")
#undef PATTERN

namespace java {
	namespace io {
		class ByteArrayInputStream;
	}
}
namespace java {
	namespace lang {
		class StackWalker$StackFrame;
		class System$Logger$Level;
		class Throwable;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class Certificate;
		}
	}
}
namespace java {
	namespace text {
		class MessageFormat;
	}
}
namespace java {
	namespace time {
		namespace format {
			class DateTimeFormatter;
		}
	}
}
namespace java {
	namespace util {
		class Map$Entry;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class SSLLogger$SSLConsoleLogger;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLLogger$SSLSimpleFormatter : public ::java::lang::Object {
	$class(SSLLogger$SSLSimpleFormatter, 0, ::java::lang::Object)
public:
	SSLLogger$SSLSimpleFormatter();
	void init$();
	static $String* format(::sun::security::ssl::SSLLogger$SSLConsoleLogger* logger, ::java::lang::System$Logger$Level* level, $String* message, $ObjectArray* parameters);
	static $String* formatByteArrayInputStream(::java::io::ByteArrayInputStream* bytes);
	static $String* formatByteBuffer(::java::nio::ByteBuffer* byteBuffer);
	static $String* formatCaller();
	static $String* formatCertificate(::java::security::cert::Certificate* certificate);
	static $String* formatMapEntry(::java::util::Map$Entry* entry);
	static $String* formatObject(Object$* obj);
	static $String* formatParameters($ObjectArray* parameters);
	static $String* formatThrowable($Throwable* throwable);
	static bool lambda$formatCaller$0(::java::lang::StackWalker$StackFrame* f);
	static $String* lambda$formatCaller$1(::java::lang::StackWalker$StackFrame* f);
	static $String* lambda$formatCaller$2(::java::util::stream::Stream* s);
	static $String* PATTERN;
	static ::java::time::format::DateTimeFormatter* dateTimeFormat;
	static ::java::text::MessageFormat* basicCertFormat;
	static ::java::text::MessageFormat* extendedCertFormart;
	static ::java::text::MessageFormat* messageFormatNoParas;
	static ::java::text::MessageFormat* messageCompactFormatNoParas;
	static ::java::text::MessageFormat* messageFormatWithParas;
	static ::java::text::MessageFormat* messageCompactFormatWithParas;
	static ::java::text::MessageFormat* keyObjectFormat;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("PATTERN")

#endif // _sun_security_ssl_SSLLogger$SSLSimpleFormatter_h_