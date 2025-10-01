#ifndef _java_util_Formatter_h_
#define _java_util_Formatter_h_
//$ class java.util.Formatter
//$ extends java.io.Closeable
//$ implements java.io.Flushable

#include <java/io/Closeable.h>
#include <java/io/Flushable.h>
#include <java/lang/Array.h>

#pragma push_macro("ZERO_SENTINEL")
#undef ZERO_SENTINEL

namespace java {
	namespace io {
		class File;
		class IOException;
		class OutputStream;
		class PrintStream;
	}
}
namespace java {
	namespace lang {
		class Appendable;
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
		class List;
		class Locale;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

namespace java {
	namespace util {

class $import Formatter : public ::java::io::Closeable, public ::java::io::Flushable {
	$class(Formatter, 0, ::java::io::Closeable, ::java::io::Flushable)
public:
	Formatter();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::Locale* l, ::java::lang::Appendable* a);
	void init$(::java::nio::charset::Charset* charset, ::java::util::Locale* l, ::java::io::File* file);
	void init$();
	void init$(::java::lang::Appendable* a);
	void init$(::java::util::Locale* l);
	void init$(::java::lang::Appendable* a, ::java::util::Locale* l);
	void init$($String* fileName);
	void init$($String* fileName, $String* csn);
	void init$($String* fileName, $String* csn, ::java::util::Locale* l);
	void init$($String* fileName, ::java::nio::charset::Charset* charset, ::java::util::Locale* l);
	void init$(::java::io::File* file);
	void init$(::java::io::File* file, $String* csn);
	void init$(::java::io::File* file, $String* csn, ::java::util::Locale* l);
	void init$(::java::io::File* file, ::java::nio::charset::Charset* charset, ::java::util::Locale* l);
	void init$(::java::io::PrintStream* ps);
	void init$(::java::io::OutputStream* os);
	void init$(::java::io::OutputStream* os, $String* csn);
	void init$(::java::io::OutputStream* os, $String* csn, ::java::util::Locale* l);
	void init$(::java::io::OutputStream* os, ::java::nio::charset::Charset* charset, ::java::util::Locale* l);
	virtual void close() override;
	void ensureOpen();
	virtual void flush() override;
	::java::util::Formatter* format($String* format, $ObjectArray* args);
	::java::util::Formatter* format(::java::util::Locale* l, $String* format, $ObjectArray* args);
	::java::io::IOException* ioException();
	::java::util::Locale* locale();
	static ::java::lang::Appendable* nonNullAppendable(::java::lang::Appendable* a);
	::java::lang::Appendable* out();
	::java::util::List* parse($String* s);
	static ::java::nio::charset::Charset* toCharset($String* csn);
	virtual $String* toString() override;
	char16_t zero();
	::java::lang::Appendable* a = nullptr;
	::java::util::Locale* l = nullptr;
	::java::io::IOException* lastException = nullptr;
	static const char16_t ZERO_SENTINEL = ((char16_t)65534);
	char16_t zero$ = 0;
	static $String* formatSpecifier;
	static ::java::util::regex::Pattern* fsPattern;
};

	} // util
} // java

#pragma pop_macro("ZERO_SENTINEL")

#endif // _java_util_Formatter_h_