#include <sun/net/www/protocol/http/DigestAuthentication$Parameters.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Random.h>
#include <sun/net/www/protocol/http/DigestAuthentication.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Random = ::java::util::Random;
using $DigestAuthentication = ::sun::net::www::protocol::http::DigestAuthentication;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

$FieldInfo _DigestAuthentication$Parameters_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestAuthentication$Parameters, serialVersionUID)},
	{"serverQop", "Z", nullptr, $PRIVATE, $field(DigestAuthentication$Parameters, serverQop)},
	{"opaque", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DigestAuthentication$Parameters, opaque)},
	{"cnonce", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DigestAuthentication$Parameters, cnonce)},
	{"nonce", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DigestAuthentication$Parameters, nonce)},
	{"algorithm", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DigestAuthentication$Parameters, algorithm)},
	{"NCcount", "I", nullptr, $PRIVATE, $field(DigestAuthentication$Parameters, NCcount)},
	{"cachedHA1", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DigestAuthentication$Parameters, cachedHA1)},
	{"redoCachedHA1", "Z", nullptr, $PRIVATE, $field(DigestAuthentication$Parameters, redoCachedHA1)},
	{"cnonceRepeat", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestAuthentication$Parameters, cnonceRepeat)},
	{"cnoncelen", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestAuthentication$Parameters, cnoncelen)},
	{"random", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC, $staticField(DigestAuthentication$Parameters, random)},
	{"cnonce_count", "I", nullptr, 0, $field(DigestAuthentication$Parameters, cnonce_count)},
	{}
};

$MethodInfo _DigestAuthentication$Parameters_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DigestAuthentication$Parameters::*)()>(&DigestAuthentication$Parameters::init$))},
	{"authQop", "()Z", nullptr, 0},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $SYNCHRONIZED},
	{"getCachedHA1", "()Ljava/lang/String;", nullptr, $SYNCHRONIZED},
	{"getCnonce", "()Ljava/lang/String;", nullptr, $SYNCHRONIZED},
	{"getNCCount", "()I", nullptr, $SYNCHRONIZED},
	{"getNonce", "()Ljava/lang/String;", nullptr, $SYNCHRONIZED},
	{"getOpaque", "()Ljava/lang/String;", nullptr, $SYNCHRONIZED},
	{"incrementNC", "()V", nullptr, $SYNCHRONIZED},
	{"setAlgorithm", "(Ljava/lang/String;)V", nullptr, $SYNCHRONIZED},
	{"setCachedHA1", "(Ljava/lang/String;)V", nullptr, $SYNCHRONIZED},
	{"setNewCnonce", "()V", nullptr, $SYNCHRONIZED},
	{"setNonce", "(Ljava/lang/String;)V", nullptr, $SYNCHRONIZED},
	{"setOpaque", "(Ljava/lang/String;)V", nullptr, $SYNCHRONIZED},
	{"setQop", "(Ljava/lang/String;)V", nullptr, $SYNCHRONIZED},
	{}
};

$InnerClassInfo _DigestAuthentication$Parameters_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.DigestAuthentication$Parameters", "sun.net.www.protocol.http.DigestAuthentication", "Parameters", $STATIC},
	{}
};

$ClassInfo _DigestAuthentication$Parameters_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.http.DigestAuthentication$Parameters",
	"java.lang.Object",
	"java.io.Serializable",
	_DigestAuthentication$Parameters_FieldInfo_,
	_DigestAuthentication$Parameters_MethodInfo_,
	nullptr,
	nullptr,
	_DigestAuthentication$Parameters_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.DigestAuthentication"
};

$Object* allocate$DigestAuthentication$Parameters($Class* clazz) {
	return $of($alloc(DigestAuthentication$Parameters));
}

$Random* DigestAuthentication$Parameters::random = nullptr;

void DigestAuthentication$Parameters::init$() {
	this->NCcount = 0;
	this->redoCachedHA1 = true;
	this->cnonce_count = 0;
	this->serverQop = false;
	$set(this, opaque, nullptr);
	$set(this, algorithm, nullptr);
	$set(this, cachedHA1, nullptr);
	$set(this, nonce, nullptr);
	setNewCnonce();
}

bool DigestAuthentication$Parameters::authQop() {
	return this->serverQop;
}

void DigestAuthentication$Parameters::incrementNC() {
	$synchronized(this) {
		++this->NCcount;
	}
}

int32_t DigestAuthentication$Parameters::getNCCount() {
	$synchronized(this) {
		return this->NCcount;
	}
}

$String* DigestAuthentication$Parameters::getCnonce() {
	$synchronized(this) {
		if (this->cnonce_count >= DigestAuthentication$Parameters::cnonceRepeat) {
			setNewCnonce();
		}
		++this->cnonce_count;
		return this->cnonce;
	}
}

void DigestAuthentication$Parameters::setNewCnonce() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($bytes, bb, $new($bytes, DigestAuthentication$Parameters::cnoncelen / 2));
		$var($chars, cc, $new($chars, DigestAuthentication$Parameters::cnoncelen));
		$nc(DigestAuthentication$Parameters::random)->nextBytes(bb);
		for (int32_t i = 0; i < (DigestAuthentication$Parameters::cnoncelen / 2); ++i) {
			int32_t x = bb->get(i) + 128;
			cc->set(i * 2, (char16_t)(u'A' + x / 16));
			cc->set(i * 2 + 1, (char16_t)(u'A' + x % 16));
		}
		$set(this, cnonce, $new($String, cc, 0, DigestAuthentication$Parameters::cnoncelen));
		this->cnonce_count = 0;
		this->redoCachedHA1 = true;
	}
}

void DigestAuthentication$Parameters::setQop($String* qop) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (qop != nullptr) {
			$var($StringArray, items, qop->split(","_s));
			{
				$var($StringArray, arr$, items);
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($String, item, arr$->get(i$));
					{
						if ("auth"_s->equalsIgnoreCase($($nc(item)->trim()))) {
							this->serverQop = true;
							return;
						}
					}
				}
			}
		}
		this->serverQop = false;
	}
}

$String* DigestAuthentication$Parameters::getOpaque() {
	$synchronized(this) {
		return this->opaque;
	}
}

void DigestAuthentication$Parameters::setOpaque($String* s) {
	$synchronized(this) {
		$set(this, opaque, s);
	}
}

$String* DigestAuthentication$Parameters::getNonce() {
	$synchronized(this) {
		return this->nonce;
	}
}

void DigestAuthentication$Parameters::setNonce($String* s) {
	$synchronized(this) {
		if (this->nonce == nullptr || !$nc(s)->equals(this->nonce)) {
			$set(this, nonce, s);
			this->NCcount = 0;
			this->redoCachedHA1 = true;
		}
	}
}

$String* DigestAuthentication$Parameters::getCachedHA1() {
	$synchronized(this) {
		if (this->redoCachedHA1) {
			return nullptr;
		} else {
			return this->cachedHA1;
		}
	}
}

void DigestAuthentication$Parameters::setCachedHA1($String* s) {
	$synchronized(this) {
		$set(this, cachedHA1, s);
		this->redoCachedHA1 = false;
	}
}

$String* DigestAuthentication$Parameters::getAlgorithm() {
	$synchronized(this) {
		return this->algorithm;
	}
}

void DigestAuthentication$Parameters::setAlgorithm($String* s) {
	$synchronized(this) {
		$set(this, algorithm, s);
	}
}

void clinit$DigestAuthentication$Parameters($Class* class$) {
	{
		$assignStatic(DigestAuthentication$Parameters::random, $new($Random));
	}
}

DigestAuthentication$Parameters::DigestAuthentication$Parameters() {
}

$Class* DigestAuthentication$Parameters::load$($String* name, bool initialize) {
	$loadClass(DigestAuthentication$Parameters, name, initialize, &_DigestAuthentication$Parameters_ClassInfo_, clinit$DigestAuthentication$Parameters, allocate$DigestAuthentication$Parameters);
	return class$;
}

$Class* DigestAuthentication$Parameters::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun