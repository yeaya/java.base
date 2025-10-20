#include <javax/crypto/CipherOutputStream.h>

#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <javax/crypto/BadPaddingException.h>
#include <javax/crypto/Cipher.h>
#include <javax/crypto/IllegalBlockSizeException.h>
#include <javax/crypto/NullCipher.h>
#include <javax/crypto/ShortBufferException.h>
#include <jcpp.h>

using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $BadPaddingException = ::javax::crypto::BadPaddingException;
using $Cipher = ::javax::crypto::Cipher;
using $IllegalBlockSizeException = ::javax::crypto::IllegalBlockSizeException;
using $NullCipher = ::javax::crypto::NullCipher;
using $ShortBufferException = ::javax::crypto::ShortBufferException;

namespace javax {
	namespace crypto {

$FieldInfo _CipherOutputStream_FieldInfo_[] = {
	{"cipher", "Ljavax/crypto/Cipher;", nullptr, $PRIVATE, $field(CipherOutputStream, cipher)},
	{"output", "Ljava/io/OutputStream;", nullptr, $PRIVATE, $field(CipherOutputStream, output)},
	{"ibuffer", "[B", nullptr, $PRIVATE, $field(CipherOutputStream, ibuffer)},
	{"obuffer", "[B", nullptr, $PRIVATE, $field(CipherOutputStream, obuffer)},
	{"closed", "Z", nullptr, $PRIVATE, $field(CipherOutputStream, closed)},
	{}
};

$MethodInfo _CipherOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;Ljavax/crypto/Cipher;)V", nullptr, $PUBLIC, $method(static_cast<void(CipherOutputStream::*)($OutputStream*,$Cipher*)>(&CipherOutputStream::init$))},
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, $PROTECTED, $method(static_cast<void(CipherOutputStream::*)($OutputStream*)>(&CipherOutputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"ensureCapacity", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(CipherOutputStream::*)(int32_t)>(&CipherOutputStream::ensureCapacity))},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([B)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _CipherOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.crypto.CipherOutputStream",
	"java.io.FilterOutputStream",
	nullptr,
	_CipherOutputStream_FieldInfo_,
	_CipherOutputStream_MethodInfo_
};

$Object* allocate$CipherOutputStream($Class* clazz) {
	return $of($alloc(CipherOutputStream));
}

void CipherOutputStream::ensureCapacity(int32_t inLen) {
	int32_t minLen = $nc(this->cipher)->getOutputSize(inLen);
	if (this->obuffer == nullptr || $nc(this->obuffer)->length < minLen) {
		$set(this, obuffer, $new($bytes, minLen));
	}
}

void CipherOutputStream::init$($OutputStream* os, $Cipher* c) {
	$FilterOutputStream::init$(os);
	$set(this, ibuffer, $new($bytes, 1));
	$set(this, obuffer, nullptr);
	this->closed = false;
	$set(this, output, os);
	$set(this, cipher, c);
}

void CipherOutputStream::init$($OutputStream* os) {
	$FilterOutputStream::init$(os);
	$set(this, ibuffer, $new($bytes, 1));
	$set(this, obuffer, nullptr);
	this->closed = false;
	$set(this, output, os);
	$set(this, cipher, $new($NullCipher));
}

void CipherOutputStream::write(int32_t b) {
	$nc(this->ibuffer)->set(0, (int8_t)b);
	ensureCapacity(1);
	try {
		int32_t ostored = $nc(this->cipher)->update(this->ibuffer, 0, 1, this->obuffer);
		if (ostored > 0) {
			$nc(this->output)->write(this->obuffer, 0, ostored);
		}
	} catch ($ShortBufferException&) {
		$var($ShortBufferException, sbe, $catch());
		$throwNew($IOException, static_cast<$Throwable*>(sbe));
	}
}

void CipherOutputStream::write($bytes* b) {
	write(b, 0, $nc(b)->length);
}

void CipherOutputStream::write($bytes* b, int32_t off, int32_t len) {
	ensureCapacity(len);
	try {
		int32_t ostored = $nc(this->cipher)->update(b, off, len, this->obuffer);
		if (ostored > 0) {
			$nc(this->output)->write(this->obuffer, 0, ostored);
		}
	} catch ($ShortBufferException&) {
		$var($ShortBufferException, e, $catch());
		$throwNew($IOException, static_cast<$Throwable*>(e));
	}
}

void CipherOutputStream::flush() {
	$nc(this->output)->flush();
}

void CipherOutputStream::close() {
	$useLocalCurrentObjectStackCache();
	if (this->closed) {
		return;
	}
	this->closed = true;
	ensureCapacity(0);
	try {
		int32_t ostored = $nc(this->cipher)->doFinal(this->obuffer, 0);
		if (ostored > 0) {
			$nc(this->output)->write(this->obuffer, 0, ostored);
		}
	} catch ($IllegalBlockSizeException&) {
		$var($GeneralSecurityException, e, $catch());
	} catch ($BadPaddingException&) {
		$var($GeneralSecurityException, e, $catch());
	} catch ($ShortBufferException&) {
		$var($GeneralSecurityException, e, $catch());
	}
	$set(this, obuffer, nullptr);
	try {
		flush();
	} catch ($IOException&) {
		$catch();
	}
	$nc(this->output)->close();
}

CipherOutputStream::CipherOutputStream() {
}

$Class* CipherOutputStream::load$($String* name, bool initialize) {
	$loadClass(CipherOutputStream, name, initialize, &_CipherOutputStream_ClassInfo_, allocate$CipherOutputStream);
	return class$;
}

$Class* CipherOutputStream::class$ = nullptr;

	} // crypto
} // javax