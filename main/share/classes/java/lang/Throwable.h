#ifndef _java_lang_Throwable_h_
#define _java_lang_Throwable_h_
//$ class java.lang.Throwable
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("CAUSE_CAPTION")
#undef CAUSE_CAPTION
#pragma push_macro("EMPTY_THROWABLE_ARRAY")
#undef EMPTY_THROWABLE_ARRAY
#pragma push_macro("NULL_CAUSE_MESSAGE")
#undef NULL_CAUSE_MESSAGE
#pragma push_macro("SELF_SUPPRESSION_MESSAGE")
#undef SELF_SUPPRESSION_MESSAGE
#pragma push_macro("SUPPRESSED_CAPTION")
#undef SUPPRESSED_CAPTION
#pragma push_macro("SUPPRESSED_SENTINEL")
#undef SUPPRESSED_SENTINEL
#pragma push_macro("UNASSIGNED_STACK")
#undef UNASSIGNED_STACK

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class PrintStream;
		class PrintWriter;
	}
}
namespace java {
	namespace lang {
		class StackTraceElement;
		class Throwable$PrintStreamOrWriter;
	}
}
namespace java {
	namespace util {
		class List;
		class Set;
	}
}

namespace java {
	namespace lang {

class $export Throwable : public ::java::io::Serializable {
	$class(Throwable, $PRELOAD | $PREINIT | $THROWABLE, ::java::io::Serializable)
public:
	Throwable();
	void init$();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	void init$($String* message, $Throwable* cause, bool enableSuppression, bool writableStackTrace);
	void addSuppressed($Throwable* exception);
	virtual $Throwable* fillInStackTrace();
	$Throwable* fillInStackTrace(int32_t dummy);
	virtual $Throwable* getCause();
	virtual $String* getLocalizedMessage();
	virtual $String* getMessage();
	$Array<::java::lang::StackTraceElement>* getOurStackTrace();
	virtual $Array<::java::lang::StackTraceElement>* getStackTrace();
	$Array<::java::lang::Throwable>* getSuppressed();
	virtual $Throwable* initCause($Throwable* cause);
	void printEnclosedStackTrace(::java::lang::Throwable$PrintStreamOrWriter* s, $Array<::java::lang::StackTraceElement>* enclosingTrace, $String* caption, $String* prefix, ::java::util::Set* dejaVu);
	virtual void printStackTrace();
	virtual void printStackTrace(::java::io::PrintStream* s);
	void printStackTrace(::java::lang::Throwable$PrintStreamOrWriter* s);
	virtual void printStackTrace(::java::io::PrintWriter* s);
	void readObject(::java::io::ObjectInputStream* s);
	void setCause($Throwable* t);
	virtual void setStackTrace($Array<::java::lang::StackTraceElement>* stackTrace);
	virtual $String* toString() override;
	int32_t validateSuppressedExceptionsList(::java::util::List* deserSuppressedExceptions);
	void writeObject(::java::io::ObjectOutputStream* s);
	static bool $assertionsDisabled;
	static const int64_t serialVersionUID = (int64_t)0xD5C635273977B8CB;
	$Object* backtrace = nullptr;
	$String* detailMessage = nullptr;
	static $Array<::java::lang::StackTraceElement>* UNASSIGNED_STACK;
	$Throwable* cause = nullptr;
	$Array<::java::lang::StackTraceElement>* stackTrace = nullptr;
	int32_t depth = 0;
	static ::java::util::List* SUPPRESSED_SENTINEL;
	::java::util::List* suppressedExceptions = nullptr;
	static $String* NULL_CAUSE_MESSAGE;
	static $String* SELF_SUPPRESSION_MESSAGE;
	static $String* CAUSE_CAPTION;
	static $String* SUPPRESSED_CAPTION;
	static $Array<::java::lang::Throwable>* EMPTY_THROWABLE_ARRAY;
	Throwable(const Throwable& e);
	virtual void throw$();
	inline Throwable* operator ->() {
		return (Throwable*)throwing$;
	}
	template<typename T, $enable_if($is_convertible(::java::lang::Throwable*, T*))>
	inline operator T*() const {
		return throwing$;
	}
	template<typename T, $enable_if(!$is_convertible(::java::lang::Throwable*, T*) && $is_base_of(::java::lang::Throwable, T))>
	inline operator T*() const {
		return dynamic_cast<T*>(throwing$);
	}
	void setThrowing$(Throwable* throwing);
	~Throwable();
	Throwable* throwing$ = nullptr;
	$longs* stack$ = nullptr;
};

	} // lang
} // java

#pragma pop_macro("CAUSE_CAPTION")
#pragma pop_macro("EMPTY_THROWABLE_ARRAY")
#pragma pop_macro("NULL_CAUSE_MESSAGE")
#pragma pop_macro("SELF_SUPPRESSION_MESSAGE")
#pragma pop_macro("SUPPRESSED_CAPTION")
#pragma pop_macro("SUPPRESSED_SENTINEL")
#pragma pop_macro("UNASSIGNED_STACK")

#endif // _java_lang_Throwable_h_