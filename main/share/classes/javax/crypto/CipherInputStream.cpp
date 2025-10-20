#include <javax/crypto/CipherInputStream.h>

#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
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

using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $BadPaddingException = ::javax::crypto::BadPaddingException;
using $Cipher = ::javax::crypto::Cipher;
using $IllegalBlockSizeException = ::javax::crypto::IllegalBlockSizeException;
using $NullCipher = ::javax::crypto::NullCipher;
using $ShortBufferException = ::javax::crypto::ShortBufferException;

namespace javax {
	namespace crypto {

$FieldInfo _CipherInputStream_FieldInfo_[] = {
	{"cipher", "Ljavax/crypto/Cipher;", nullptr, $PRIVATE, $field(CipherInputStream, cipher)},
	{"input", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(CipherInputStream, input)},
	{"ibuffer", "[B", nullptr, $PRIVATE, $field(CipherInputStream, ibuffer)},
	{"done", "Z", nullptr, $PRIVATE, $field(CipherInputStream, done)},
	{"obuffer", "[B", nullptr, $PRIVATE, $field(CipherInputStream, obuffer)},
	{"ostart", "I", nullptr, $PRIVATE, $field(CipherInputStream, ostart)},
	{"ofinish", "I", nullptr, $PRIVATE, $field(CipherInputStream, ofinish)},
	{"closed", "Z", nullptr, $PRIVATE, $field(CipherInputStream, closed)},
	{}
};

$MethodInfo _CipherInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;Ljavax/crypto/Cipher;)V", nullptr, $PUBLIC, $method(static_cast<void(CipherInputStream::*)($InputStream*,$Cipher*)>(&CipherInputStream::init$))},
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PROTECTED, $method(static_cast<void(CipherInputStream::*)($InputStream*)>(&CipherInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"ensureCapacity", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(CipherInputStream::*)(int32_t)>(&CipherInputStream::ensureCapacity))},
	{"getMoreData", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(CipherInputStream::*)()>(&CipherInputStream::getMoreData)), "java.io.IOException"},
	{"markSupported", "()Z", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([B)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _CipherInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.crypto.CipherInputStream",
	"java.io.FilterInputStream",
	nullptr,
	_CipherInputStream_FieldInfo_,
	_CipherInputStream_MethodInfo_
};

$Object* allocate$CipherInputStream($Class* clazz) {
	return $of($alloc(CipherInputStream));
}

void CipherInputStream::ensureCapacity(int32_t inLen) {
	int32_t minLen = $nc(this->cipher)->getOutputSize(inLen);
	if (this->obuffer == nullptr || $nc(this->obuffer)->length < minLen) {
		$set(this, obuffer, $new($bytes, minLen));
	}
	this->ostart = 0;
	this->ofinish = 0;
}

int32_t CipherInputStream::getMoreData() {
	$useLocalCurrentObjectStackCache();
	if (this->done) {
		return -1;
	}
	int32_t readin = $nc(this->input)->read(this->ibuffer);
	if (readin == -1) {
		this->done = true;
		ensureCapacity(0);
		try {
			this->ofinish = $nc(this->cipher)->doFinal(this->obuffer, 0);
		} catch ($IllegalBlockSizeException&) {
			$var($GeneralSecurityException, e, $catch());
			$throwNew($IOException, static_cast<$Throwable*>(e));
		} catch ($BadPaddingException&) {
			$var($GeneralSecurityException, e, $catch());
			$throwNew($IOException, static_cast<$Throwable*>(e));
		} catch ($ShortBufferException&) {
			$var($GeneralSecurityException, e, $catch());
			$throwNew($IOException, static_cast<$Throwable*>(e));
		}
		if (this->ofinish == 0) {
			return -1;
		} else {
			return this->ofinish;
		}
	}
	ensureCapacity(readin);
	try {
		this->ofinish = $nc(this->cipher)->update(this->ibuffer, 0, readin, this->obuffer, this->ostart);
	} catch ($IllegalStateException&) {
		$var($IllegalStateException, e, $catch());
		$throw(e);
	} catch ($ShortBufferException&) {
		$var($ShortBufferException, e, $catch());
		$throwNew($IOException, static_cast<$Throwable*>(e));
	}
	return this->ofinish;
}

void CipherInputStream::init$($InputStream* is, $Cipher* c) {
	$FilterInputStream::init$(is);
	$set(this, ibuffer, $new($bytes, 512));
	this->done = false;
	$set(this, obuffer, nullptr);
	this->ostart = 0;
	this->ofinish = 0;
	this->closed = false;
	$set(this, input, is);
	$set(this, cipher, c);
}

void CipherInputStream::init$($InputStream* is) {
	$FilterInputStream::init$(is);
	$set(this, ibuffer, $new($bytes, 512));
	this->done = false;
	$set(this, obuffer, nullptr);
	this->ostart = 0;
	this->ofinish = 0;
	this->closed = false;
	$set(this, input, is);
	$set(this, cipher, $new($NullCipher));
}

int32_t CipherInputStream::read() {
	if (this->ostart >= this->ofinish) {
		int32_t i = 0;
		while (i == 0) {
			i = getMoreData();
		}
		if (i == -1) {
			return -1;
		}
	}
	return ((int32_t)((int32_t)$nc(this->obuffer)->get(this->ostart++) & (uint32_t)255));
}

int32_t CipherInputStream::read($bytes* b) {
	return read(b, 0, $nc(b)->length);
}

int32_t CipherInputStream::read($bytes* b, int32_t off, int32_t len) {
	if (this->ostart >= this->ofinish) {
		int32_t i = 0;
		while (i == 0) {
			i = getMoreData();
		}
		if (i == -1) {
			return -1;
		}
	}
	if (len <= 0) {
		return 0;
	}
	int32_t available = this->ofinish - this->ostart;
	if (len < available) {
		available = len;
	}
	if (b != nullptr) {
		$System::arraycopy(this->obuffer, this->ostart, b, off, available);
	}
	this->ostart = this->ostart + available;
	return available;
}

int64_t CipherInputStream::skip(int64_t n) {
	int32_t available = this->ofinish - this->ostart;
	if (n > available) {
		n = available;
	}
	if (n < 0) {
		return 0;
	}
	this->ostart += n;
	return n;
}

int32_t CipherInputStream::available() {
	return (this->ofinish - this->ostart);
}

void CipherInputStream::close() {
	$useLocalCurrentObjectStackCache();
	if (this->closed) {
		return;
	}
	this->closed = true;
	$nc(this->input)->close();
	if (!this->done) {
		ensureCapacity(0);
		try {
			$nc(this->cipher)->doFinal(this->obuffer, 0);
		} catch ($BadPaddingException&) {
			$var($GeneralSecurityException, ex, $catch());
		} catch ($IllegalBlockSizeException&) {
			$var($GeneralSecurityException, ex, $catch());
		} catch ($ShortBufferException&) {
			$var($GeneralSecurityException, ex, $catch());
		}
	}
	$set(this, obuffer, nullptr);
}

bool CipherInputStream::markSupported() {
	return false;
}

CipherInputStream::CipherInputStream() {
}

$Class* CipherInputStream::load$($String* name, bool initialize) {
	$loadClass(CipherInputStream, name, initialize, &_CipherInputStream_ClassInfo_, allocate$CipherInputStream);
	return class$;
}

$Class* CipherInputStream::class$ = nullptr;

	} // crypto
} // javax