#ifndef _TransferTo_h_
#define _TransferTo_h_
//$ class TransferTo
//$ extends java.lang.Object

#include <java/lang/Array.h>

class TransferTo$Thrower;
namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}

class $export TransferTo : public ::java::lang::Object {
	$class(TransferTo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TransferTo();
	void init$();
	static void assertThrows(::TransferTo$Thrower* thrower, $Class* throwable, $String* message);
	static void assertThrowsNPE(::TransferTo$Thrower* thrower, $String* message);
	static void checkTransferredContents($bytes* bytes);
	static void contents();
	static $bytes* createRandomBytes(int32_t min, int32_t maxRandomAdditive);
	static void ifExceptionInInputNeitherStreamIsClosed();
	static void ifExceptionInOutputNeitherStreamIsClosed();
	static void ifOutIsNullThenNpeIsThrown();
	static ::java::io::InputStream* input($bytes* bytes);
	static ::java::io::InputStream* input(int32_t exceptionPosition, $bytes* bytes);
	static void lambda$ifOutIsNullThenNpeIsThrown$0(::java::io::InputStream* in);
	static void main($StringArray* args);
	static void onReturnInputIsAtEnd();
	static void onReturnNeitherStreamIsClosed();
	static ::java::io::OutputStream* output();
	static ::java::io::OutputStream* output(int32_t exceptionPosition);
	static void transferToThenCheckIfAnyClosed(::java::io::InputStream* input, ::java::io::OutputStream* output);
};

#endif // _TransferTo_h_