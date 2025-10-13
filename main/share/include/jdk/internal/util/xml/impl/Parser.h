#ifndef _jdk_internal_util_xml_impl_Parser_h_
#define _jdk_internal_util_xml_impl_Parser_h_
//$ class jdk.internal.util.xml.impl.Parser
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BUFFSIZE_PARSER")
#undef BUFFSIZE_PARSER
#pragma push_macro("BUFFSIZE_READER")
#undef BUFFSIZE_READER
#pragma push_macro("EOS")
#undef EOS
#pragma push_macro("EV_CDAT")
#undef EV_CDAT
#pragma push_macro("EV_COMM")
#undef EV_COMM
#pragma push_macro("EV_DTD")
#undef EV_DTD
#pragma push_macro("EV_ELM")
#undef EV_ELM
#pragma push_macro("EV_ELME")
#undef EV_ELME
#pragma push_macro("EV_ELMS")
#undef EV_ELMS
#pragma push_macro("EV_ENT")
#undef EV_ENT
#pragma push_macro("EV_NULL")
#undef EV_NULL
#pragma push_macro("EV_PI")
#undef EV_PI
#pragma push_macro("EV_TEXT")
#undef EV_TEXT
#pragma push_macro("EV_WSPC")
#undef EV_WSPC
#pragma push_macro("FAULT")
#undef FAULT
#pragma push_macro("NONS")
#undef NONS
#pragma push_macro("PH_AFTER_DOC")
#undef PH_AFTER_DOC
#pragma push_macro("PH_BEFORE_DOC")
#undef PH_BEFORE_DOC
#pragma push_macro("PH_DOCELM")
#undef PH_DOCELM
#pragma push_macro("PH_DOCELM_MISC")
#undef PH_DOCELM_MISC
#pragma push_macro("PH_DOC_START")
#undef PH_DOC_START
#pragma push_macro("PH_DTD")
#undef PH_DTD
#pragma push_macro("PH_DTD_MISC")
#undef PH_DTD_MISC
#pragma push_macro("PH_MISC_DTD")
#undef PH_MISC_DTD
#pragma push_macro("XML")
#undef XML
#pragma push_macro("XMLNS")
#undef XMLNS

namespace java {
	namespace io {
		class InputStream;
		class Reader;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {
					class InputSource;
				}
			}
		}
	}
}
namespace jdk {
	namespace internal {
		namespace util {
			namespace xml {
				namespace impl {
					class Attrs;
					class Input;
					class Pair;
				}
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace util {
			namespace xml {
				namespace impl {

class $import Parser : public ::java::lang::Object {
	$class(Parser, 0, ::java::lang::Object)
public:
	Parser();
	void init$();
	void attr(::jdk::internal::util::xml::impl::Pair* att);
	$String* atype(::jdk::internal::util::xml::impl::Pair* att);
	void bappend(char16_t ch, char16_t mode);
	void bappend(char16_t ch);
	void bcopy(int32_t cidx, int32_t bidx);
	virtual void bflash() {}
	virtual void bflash_ws() {}
	virtual void bkch();
	char16_t bkeyword();
	void bname(bool ns);
	void bntok();
	::java::io::Reader* bom(::java::io::InputStream* is, char16_t hint);
	void bqstr(char16_t flag);
	void cdat();
	virtual char16_t chtyp(char16_t ch);
	virtual void cleanup();
	void comm();
	virtual void comm($chars* text, int32_t length) {}
	virtual ::jdk::internal::util::xml::impl::Pair* del(::jdk::internal::util::xml::impl::Pair* pair);
	virtual void docType($String* name, $String* pubid, $String* sysid) {}
	void dtd();
	void dtdatt(::jdk::internal::util::xml::impl::Pair* elm);
	void dtdattl();
	void dtdelm();
	void dtdent();
	void dtdnot();
	void dtdsub();
	void eappend(char16_t ch);
	::java::io::Reader* enc($String* name, ::java::io::InputStream* is);
	$String* ent(char16_t flag);
	virtual $String* eqstr(char16_t flag);
	virtual ::jdk::internal::util::xml::impl::Pair* find(::jdk::internal::util::xml::impl::Pair* chain, $chars* qname);
	virtual char16_t getch();
	virtual void init();
	bool isdecl(::jdk::internal::util::xml::impl::Pair* name, $String* value);
	virtual $String* name(bool ns);
	virtual void newPrefix() {}
	virtual void notDecl($String* name, $String* pubid, $String* sysid) {}
	virtual ::jdk::internal::util::xml::impl::Pair* pair(::jdk::internal::util::xml::impl::Pair* next);
	virtual void panic($String* msg) {}
	void pent(char16_t flag);
	void pi();
	virtual void pi($String* target, $String* body) {}
	virtual void pop();
	void pubsys(::jdk::internal::util::xml::impl::Input* inp);
	::jdk::internal::util::xml::impl::Pair* pubsys(char16_t flag);
	virtual void push(::jdk::internal::util::xml::impl::Input* inp);
	virtual $chars* qname(bool ns);
	virtual ::jdk::internal::org::xml::sax::InputSource* resolveEnt($String* name, $String* pubid, $String* sysid) {return nullptr;}
	$String* rslv($chars* qname);
	virtual void setch(char16_t ch);
	virtual void setinp(::jdk::internal::org::xml::sax::InputSource* is);
	virtual void skippedEnt($String* name) {}
	virtual void startInternalSub() {}
	virtual int32_t step();
	virtual void unparsedEntDecl($String* name, $String* pubid, $String* sysid, $String* notation) {}
	::java::io::Reader* utf16(::java::io::InputStream* is);
	virtual char16_t wsskip();
	$String* xml(::java::io::Reader* reader);
	static $String* FAULT;
	static const int32_t BUFFSIZE_READER = 512;
	static const int32_t BUFFSIZE_PARSER = 128;
	static const char16_t EOS = 0x0000FFFF;
	::jdk::internal::util::xml::impl::Pair* mNoNS = nullptr;
	::jdk::internal::util::xml::impl::Pair* mXml = nullptr;
	::java::util::Map* mEnt = nullptr;
	::java::util::Map* mPEnt = nullptr;
	bool mIsSAlone = false;
	bool mIsSAloneSet = false;
	bool mIsNSAware = false;
	int32_t mPh = 0;
	static const int32_t PH_BEFORE_DOC = (-1);
	static const int32_t PH_DOC_START = 0;
	static const int32_t PH_MISC_DTD = 1;
	static const int32_t PH_DTD = 2;
	static const int32_t PH_DTD_MISC = 3;
	static const int32_t PH_DOCELM = 4;
	static const int32_t PH_DOCELM_MISC = 5;
	static const int32_t PH_AFTER_DOC = 6;
	int32_t mEvt = 0;
	static const int32_t EV_NULL = 0;
	static const int32_t EV_ELM = 1;
	static const int32_t EV_ELMS = 2;
	static const int32_t EV_ELME = 3;
	static const int32_t EV_TEXT = 4;
	static const int32_t EV_WSPC = 5;
	static const int32_t EV_PI = 6;
	static const int32_t EV_CDAT = 7;
	static const int32_t EV_COMM = 8;
	static const int32_t EV_DTD = 9;
	static const int32_t EV_ENT = 10;
	char16_t mESt = 0;
	$chars* mBuff = nullptr;
	int32_t mBuffIdx = 0;
	::jdk::internal::util::xml::impl::Pair* mPref = nullptr;
	::jdk::internal::util::xml::impl::Pair* mElm = nullptr;
	::jdk::internal::util::xml::impl::Pair* mAttL = nullptr;
	::jdk::internal::util::xml::impl::Input* mDoc = nullptr;
	::jdk::internal::util::xml::impl::Input* mInp = nullptr;
	$chars* mChars = nullptr;
	int32_t mChLen = 0;
	int32_t mChIdx = 0;
	::jdk::internal::util::xml::impl::Attrs* mAttrs = nullptr;
	$StringArray* mItems = nullptr;
	char16_t mAttrIdx = 0;
	$String* mUnent = nullptr;
	::jdk::internal::util::xml::impl::Pair* mDltd = nullptr;
	static $chars* NONS;
	static $chars* XML;
	static $chars* XMLNS;
	static $bytes* asctyp;
	static $bytes* nmttyp;
};

				} // impl
			} // xml
		} // util
	} // internal
} // jdk

#pragma pop_macro("BUFFSIZE_PARSER")
#pragma pop_macro("BUFFSIZE_READER")
#pragma pop_macro("EOS")
#pragma pop_macro("EV_CDAT")
#pragma pop_macro("EV_COMM")
#pragma pop_macro("EV_DTD")
#pragma pop_macro("EV_ELM")
#pragma pop_macro("EV_ELME")
#pragma pop_macro("EV_ELMS")
#pragma pop_macro("EV_ENT")
#pragma pop_macro("EV_NULL")
#pragma pop_macro("EV_PI")
#pragma pop_macro("EV_TEXT")
#pragma pop_macro("EV_WSPC")
#pragma pop_macro("FAULT")
#pragma pop_macro("NONS")
#pragma pop_macro("PH_AFTER_DOC")
#pragma pop_macro("PH_BEFORE_DOC")
#pragma pop_macro("PH_DOCELM")
#pragma pop_macro("PH_DOCELM_MISC")
#pragma pop_macro("PH_DOC_START")
#pragma pop_macro("PH_DTD")
#pragma pop_macro("PH_DTD_MISC")
#pragma pop_macro("PH_MISC_DTD")
#pragma pop_macro("XML")
#pragma pop_macro("XMLNS")

#endif // _jdk_internal_util_xml_impl_Parser_h_