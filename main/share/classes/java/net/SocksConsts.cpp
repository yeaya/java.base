#include <java/net/SocksConsts.h>

#include <jcpp.h>

#undef ADDR_TYPE_NOT_SUP
#undef BIND
#undef CMD_NOT_SUPPORTED
#undef CONNECT
#undef CONN_REFUSED
#undef DEFAULT_PORT
#undef DOMAIN_NAME
#undef GENERAL_FAILURE
#undef GSSAPI
#undef HOST_UNREACHABLE
#undef IPV4
#undef IPV6
#undef NET_UNREACHABLE
#undef NOT_ALLOWED
#undef NO_AUTH
#undef NO_METHODS
#undef PROTO_VERS
#undef PROTO_VERS4
#undef REQUEST_OK
#undef TTL_EXPIRED
#undef UDP_ASSOC
#undef USER_PASSW

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace java {
	namespace net {

$FieldInfo _SocksConsts_FieldInfo_[] = {
	{"PROTO_VERS4", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocksConsts, PROTO_VERS4)},
	{"PROTO_VERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocksConsts, PROTO_VERS)},
	{"DEFAULT_PORT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocksConsts, DEFAULT_PORT)},
	{"NO_AUTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocksConsts, NO_AUTH)},
	{"GSSAPI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocksConsts, GSSAPI)},
	{"USER_PASSW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocksConsts, USER_PASSW)},
	{"NO_METHODS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocksConsts, NO_METHODS)},
	{"CONNECT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocksConsts, CONNECT)},
	{"BIND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocksConsts, BIND)},
	{"UDP_ASSOC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocksConsts, UDP_ASSOC)},
	{"IPV4", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocksConsts, IPV4)},
	{"DOMAIN_NAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocksConsts, DOMAIN_NAME)},
	{"IPV6", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocksConsts, IPV6)},
	{"REQUEST_OK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocksConsts, REQUEST_OK)},
	{"GENERAL_FAILURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocksConsts, GENERAL_FAILURE)},
	{"NOT_ALLOWED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocksConsts, NOT_ALLOWED)},
	{"NET_UNREACHABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocksConsts, NET_UNREACHABLE)},
	{"HOST_UNREACHABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocksConsts, HOST_UNREACHABLE)},
	{"CONN_REFUSED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocksConsts, CONN_REFUSED)},
	{"TTL_EXPIRED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocksConsts, TTL_EXPIRED)},
	{"CMD_NOT_SUPPORTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocksConsts, CMD_NOT_SUPPORTED)},
	{"ADDR_TYPE_NOT_SUP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocksConsts, ADDR_TYPE_NOT_SUP)},
	{}
};

$ClassInfo _SocksConsts_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"java.net.SocksConsts",
	nullptr,
	nullptr,
	_SocksConsts_FieldInfo_
};

$Object* allocate$SocksConsts($Class* clazz) {
	return $of($alloc(SocksConsts));
}

$Class* SocksConsts::load$($String* name, bool initialize) {
	$loadClass(SocksConsts, name, initialize, &_SocksConsts_ClassInfo_, allocate$SocksConsts);
	return class$;
}

$Class* SocksConsts::class$ = nullptr;

	} // net
} // java