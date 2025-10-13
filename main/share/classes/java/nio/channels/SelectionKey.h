#ifndef _java_nio_channels_SelectionKey_h_
#define _java_nio_channels_SelectionKey_h_
//$ class java.nio.channels.SelectionKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ATTACHMENT")
#undef ATTACHMENT
#pragma push_macro("OP_ACCEPT")
#undef OP_ACCEPT
#pragma push_macro("OP_CONNECT")
#undef OP_CONNECT
#pragma push_macro("OP_READ")
#undef OP_READ
#pragma push_macro("OP_WRITE")
#undef OP_WRITE

namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class SelectableChannel;
			class Selector;
		}
	}
}

namespace java {
	namespace nio {
		namespace channels {

class $export SelectionKey : public ::java::lang::Object {
	$class(SelectionKey, 0, ::java::lang::Object)
public:
	SelectionKey();
	void init$();
	$Object* attach(Object$* ob);
	$Object* attachment();
	virtual void cancel() {}
	virtual ::java::nio::channels::SelectableChannel* channel() {return nullptr;}
	virtual int32_t interestOps() {return 0;}
	virtual ::java::nio::channels::SelectionKey* interestOps(int32_t ops) {return nullptr;}
	virtual int32_t interestOpsAnd(int32_t ops);
	virtual int32_t interestOpsOr(int32_t ops);
	bool isAcceptable();
	bool isConnectable();
	bool isReadable();
	virtual bool isValid() {return false;}
	bool isWritable();
	virtual int32_t readyOps() {return 0;}
	virtual ::java::nio::channels::Selector* selector() {return nullptr;}
	static const int32_t OP_READ = 1; // 1 << 0
	static const int32_t OP_WRITE = 4; // 1 << 2
	static const int32_t OP_CONNECT = 8; // 1 << 3
	static const int32_t OP_ACCEPT = 16; // 1 << 4
	static ::java::lang::invoke::VarHandle* ATTACHMENT;
	$volatile($Object*) attachment$ = nullptr;
};

		} // channels
	} // nio
} // java

#pragma pop_macro("ATTACHMENT")
#pragma pop_macro("OP_ACCEPT")
#pragma pop_macro("OP_CONNECT")
#pragma pop_macro("OP_READ")
#pragma pop_macro("OP_WRITE")

#endif // _java_nio_channels_SelectionKey_h_