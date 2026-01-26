#include <javax/security/auth/x500/X500Principal.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/security/Principal.h>
#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ResourcesMgr.h>
#include <sun/security/x509/X500Name.h>
#include <jcpp.h>

#undef CANONICAL

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Principal = ::java::security::Principal;
using $Collections = ::java::util::Collections;
using $Map = ::java::util::Map;
using $DerValue = ::sun::security::util::DerValue;
using $ResourcesMgr = ::sun::security::util::ResourcesMgr;
using $X500Name = ::sun::security::x509::X500Name;

namespace javax {
	namespace security {
		namespace auth {
			namespace x500 {

$FieldInfo _X500Principal_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X500Principal, serialVersionUID)},
	{"RFC1779", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X500Principal, RFC1779)},
	{"RFC2253", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X500Principal, RFC2253)},
	{"CANONICAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X500Principal, CANONICAL)},
	{"thisX500Name", "Lsun/security/x509/X500Name;", nullptr, $PRIVATE | $TRANSIENT, $field(X500Principal, thisX500Name)},
	{}
};

$MethodInfo _X500Principal_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Lsun/security/x509/X500Name;)V", nullptr, 0, $method(X500Principal, init$, void, $X500Name*)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(X500Principal, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/util/Map;)V", "(Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;)V", $PUBLIC, $method(X500Principal, init$, void, $String*, $Map*)},
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(X500Principal, init$, void, $bytes*)},
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(X500Principal, init$, void, $InputStream*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(X500Principal, equals, bool, Object$*)},
	{"getEncoded", "()[B", nullptr, $PUBLIC, $method(X500Principal, getEncoded, $bytes*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(X500Principal, getName, $String*)},
	{"getName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $method(X500Principal, getName, $String*, $String*)},
	{"getName", "(Ljava/lang/String;Ljava/util/Map;)Ljava/lang/String;", "(Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;)Ljava/lang/String;", $PUBLIC, $method(X500Principal, getName, $String*, $String*, $Map*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(X500Principal, hashCode, int32_t)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(X500Principal, readObject, void, $ObjectInputStream*), "java.io.IOException,java.io.NotActiveException,java.lang.ClassNotFoundException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(X500Principal, toString, $String*)},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(X500Principal, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
	{}
};

$ClassInfo _X500Principal_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.security.auth.x500.X500Principal",
	"java.lang.Object",
	"java.security.Principal,java.io.Serializable",
	_X500Principal_FieldInfo_,
	_X500Principal_MethodInfo_
};

$Object* allocate$X500Principal($Class* clazz) {
	return $of($alloc(X500Principal));
}

$Object* X500Principal::clone() {
	 return this->$Principal::clone();
}

void X500Principal::finalize() {
	this->$Principal::finalize();
}

$String* X500Principal::RFC1779 = nullptr;
$String* X500Principal::RFC2253 = nullptr;
$String* X500Principal::CANONICAL = nullptr;

void X500Principal::init$($X500Name* x500Name) {
	$set(this, thisX500Name, x500Name);
}

void X500Principal::init$($String* name) {
	X500Principal::init$(name, $($Collections::emptyMap()));
}

void X500Principal::init$($String* name, $Map* keywordMap) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		$throwNew($NullPointerException, $($ResourcesMgr::getString("provided.null.name"_s)));
	}
	if (keywordMap == nullptr) {
		$throwNew($NullPointerException, $($ResourcesMgr::getString("provided.null.keyword.map"_s)));
	}
	try {
		$set(this, thisX500Name, $new($X500Name, name, keywordMap));
	} catch ($Exception& e) {
		$var($IllegalArgumentException, iae, $new($IllegalArgumentException, $$str({"improperly specified input name: "_s, name})));
		iae->initCause(e);
		$throw(iae);
	}
}

void X500Principal::init$($bytes* name) {
	try {
		$set(this, thisX500Name, $new($X500Name, name));
	} catch ($Exception& e) {
		$var($IllegalArgumentException, iae, $new($IllegalArgumentException, "improperly specified input name"_s));
		iae->initCause(e);
		$throw(iae);
	}
}

void X500Principal::init$($InputStream* is) {
	$useLocalCurrentObjectStackCache();
	if (is == nullptr) {
		$throwNew($NullPointerException, "provided null input stream"_s);
	}
	try {
		if ($nc(is)->markSupported()) {
			is->mark(is->available() + 1);
		}
		$var($DerValue, der, $new($DerValue, is));
		$set(this, thisX500Name, $new($X500Name, der->data$));
	} catch ($Exception& e) {
		if ($nc(is)->markSupported()) {
			try {
				is->reset();
			} catch ($IOException& ioe) {
				$var($IllegalArgumentException, iae, $new($IllegalArgumentException, $$str({"improperly specified input stream "_s, ("and unable to reset input stream"_s)})));
				iae->initCause(e);
				$throw(iae);
			}
		}
		$var($IllegalArgumentException, iae, $new($IllegalArgumentException, "improperly specified input stream"_s));
		iae->initCause(e);
		$throw(iae);
	}
}

$String* X500Principal::getName() {
	return getName(X500Principal::RFC2253);
}

$String* X500Principal::getName($String* format) {
	if (format != nullptr) {
		if (format->equalsIgnoreCase(X500Principal::RFC1779)) {
			return $nc(this->thisX500Name)->getRFC1779Name();
		} else if (format->equalsIgnoreCase(X500Principal::RFC2253)) {
			return $nc(this->thisX500Name)->getRFC2253Name();
		} else if (format->equalsIgnoreCase(X500Principal::CANONICAL)) {
			return $nc(this->thisX500Name)->getRFC2253CanonicalName();
		}
	}
	$throwNew($IllegalArgumentException, "invalid format specified"_s);
}

$String* X500Principal::getName($String* format, $Map* oidMap) {
	if (oidMap == nullptr) {
		$throwNew($NullPointerException, $($ResourcesMgr::getString("provided.null.OID.map"_s)));
	}
	if (format != nullptr) {
		if (format->equalsIgnoreCase(X500Principal::RFC1779)) {
			return $nc(this->thisX500Name)->getRFC1779Name(oidMap);
		} else if (format->equalsIgnoreCase(X500Principal::RFC2253)) {
			return $nc(this->thisX500Name)->getRFC2253Name(oidMap);
		}
	}
	$throwNew($IllegalArgumentException, "invalid format specified"_s);
}

$bytes* X500Principal::getEncoded() {
	try {
		return $nc(this->thisX500Name)->getEncoded();
	} catch ($IOException& e) {
		$throwNew($RuntimeException, "unable to get encoding"_s, e);
	}
	$shouldNotReachHere();
}

$String* X500Principal::toString() {
	return $nc(this->thisX500Name)->toString();
}

bool X500Principal::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	if ($instanceOf(X500Principal, o) == false) {
		return false;
	}
	$var(X500Principal, other, $cast(X500Principal, o));
	return $nc(this->thisX500Name)->equals($nc(other)->thisX500Name);
}

int32_t X500Principal::hashCode() {
	return $nc(this->thisX500Name)->hashCode();
}

void X500Principal::writeObject($ObjectOutputStream* s) {
	$nc(s)->writeObject($($nc(this->thisX500Name)->getEncodedInternal()));
}

void X500Principal::readObject($ObjectInputStream* s) {
	$set(this, thisX500Name, $new($X500Name, $cast($bytes, $($nc(s)->readObject()))));
}

X500Principal::X500Principal() {
}

void clinit$X500Principal($Class* class$) {
	$assignStatic(X500Principal::RFC1779, "RFC1779"_s);
	$assignStatic(X500Principal::RFC2253, "RFC2253"_s);
	$assignStatic(X500Principal::CANONICAL, "CANONICAL"_s);
}

$Class* X500Principal::load$($String* name, bool initialize) {
	$loadClass(X500Principal, name, initialize, &_X500Principal_ClassInfo_, clinit$X500Principal, allocate$X500Principal);
	return class$;
}

$Class* X500Principal::class$ = nullptr;

			} // x500
		} // auth
	} // security
} // javax