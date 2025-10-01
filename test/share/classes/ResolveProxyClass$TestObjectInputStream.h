#ifndef _ResolveProxyClass$TestObjectInputStream_h_
#define _ResolveProxyClass$TestObjectInputStream_h_
//$ class ResolveProxyClass$TestObjectInputStream
//$ extends java.io.ObjectInputStream

#include <java/io/ObjectInputStream.h>
#include <java/lang/Array.h>

class ResolveProxyClass$TestObjectInputStream : public ::java::io::ObjectInputStream {
	$class(ResolveProxyClass$TestObjectInputStream, $NO_CLASS_INIT, ::java::io::ObjectInputStream)
public:
	ResolveProxyClass$TestObjectInputStream();
	void init$();
	using ::java::io::ObjectInputStream::read;
	virtual $Class* resolveProxyClass($StringArray* interfaces) override;
};

#endif // _ResolveProxyClass$TestObjectInputStream_h_