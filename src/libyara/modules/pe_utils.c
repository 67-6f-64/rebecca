/**
 * pe_utils.c
 * https://github.com/VirusTotal/yara/blob/master/libyara/modules/pe_utils.c
 *  
 * @author five (i.f-ve@ya.ru)
 * @verison (2/20/2017)
 */



/**
 * ord_lookup
 *
 * @param char *dll
 * @param uint16_t ord
 * @return char* yr_strdup(name)
 */
_BYTE *__cdecl sub_4E85E0(char *a1, __int16 a2)
{
  char v3; // [sp+8h] [bp-44h]@1

  v3 = 0;
  if ( !_strnicmp(a1, "WS2_32.dll", 0xAu) || !_strnicmp(a1, "wsock32.dll", 0xBu) )
  {
    if ( (signed int)(unsigned __int16)a2 <= 500 )
    {
      if ( a2 == 500 )
      {
        sprintf(&v3, off_6568D4);
      }
      else
      {
        switch ( a2 )
        {
          case 1:
            sprintf(&v3, "accept");
            break;
          case 2:
            sprintf(&v3, "bind");
            break;
          case 3:
            sprintf(&v3, "closesocket");
            break;
          case 4:
            sprintf(&v3, "connect");
            break;
          case 5:
            sprintf(&v3, "getpeername");
            break;
          case 6:
            sprintf(&v3, "getsockname");
            break;
          case 7:
            sprintf(&v3, "getsockopt");
            break;
          case 8:
            sprintf(&v3, "htonl");
            break;
          case 9:
            sprintf(&v3, "htons");
            break;
          case 0xA:
            sprintf(&v3, "ioctlsocket");
            break;
          case 0xB:
            sprintf(&v3, "inet_addr");
            break;
          case 0xC:
            sprintf(&v3, "inet_ntoa");
            break;
          case 0xD:
            sprintf(&v3, "listen");
            break;
          case 0xE:
            sprintf(&v3, "ntohl");
            break;
          case 0xF:
            sprintf(&v3, "ntohs");
            break;
          case 0x10:
            sprintf(&v3, "recv");
            break;
          case 0x11:
            sprintf(&v3, "recvfrom");
            break;
          case 0x12:
            sprintf(&v3, "select");
            break;
          case 0x13:
            sprintf(&v3, "send");
            break;
          case 0x14:
            sprintf(&v3, "sendto");
            break;
          case 0x15:
            sprintf(&v3, "setsockopt");
            break;
          case 0x16:
            sprintf(&v3, "shutdown");
            break;
          case 0x17:
            sprintf(&v3, "socket");
            break;
          case 0x18:
            sprintf(&v3, "GetAddrInfoW");
            break;
          case 0x19:
            sprintf(&v3, "GetNameInfoW");
            break;
          case 0x1A:
            sprintf(&v3, "WSApSetPostRoutine");
            break;
          case 0x1B:
            sprintf(&v3, "FreeAddrInfoW");
            break;
          case 0x1C:
            sprintf(&v3, "WPUCompleteOverlappedRequest");
            break;
          case 0x1D:
            sprintf(&v3, "WSAAccept");
            break;
          case 0x1E:
            sprintf(&v3, "WSAAddressToStringA");
            break;
          case 0x1F:
            sprintf(&v3, "WSAAddressToStringW");
            break;
          case 0x20:
            sprintf(&v3, "WSACloseEvent");
            break;
          case 0x21:
            sprintf(&v3, "WSAConnect");
            break;
          case 0x22:
            sprintf(&v3, "WSACreateEvent");
            break;
          case 0x23:
            sprintf(&v3, "WSADuplicateSocketA");
            break;
          case 0x24:
            sprintf(&v3, "WSADuplicateSocketW");
            break;
          case 0x25:
            sprintf(&v3, "WSAEnumNameSpaceProvidersA");
            break;
          case 0x26:
            sprintf(&v3, "WSAEnumNameSpaceProvidersW");
            break;
          case 0x27:
            sprintf(&v3, "WSAEnumNetworkEvents");
            break;
          case 0x28:
            sprintf(&v3, "WSAEnumProtocolsA");
            break;
          case 0x29:
            sprintf(&v3, "WSAEnumProtocolsW");
            break;
          case 0x2A:
            sprintf(&v3, "WSAEventSelect");
            break;
          case 0x2B:
            sprintf(&v3, "WSAGetOverlappedResult");
            break;
          case 0x2C:
            sprintf(&v3, "WSAGetQOSByName");
            break;
          case 0x2D:
            sprintf(&v3, "WSAGetServiceClassInfoA");
            break;
          case 0x2E:
            sprintf(&v3, "WSAGetServiceClassInfoW");
            break;
          case 0x2F:
            sprintf(&v3, "WSAGetServiceClassNameByClassIdA");
            break;
          case 0x30:
            sprintf(&v3, "WSAGetServiceClassNameByClassIdW");
            break;
          case 0x31:
            sprintf(&v3, "WSAHtonl");
            break;
          case 0x32:
            sprintf(&v3, "WSAHtons");
            break;
          case 0x33:
            sprintf(&v3, "gethostbyaddr");
            break;
          case 0x34:
            sprintf(&v3, "gethostbyname");
            break;
          case 0x35:
            sprintf(&v3, "getprotobyname");
            break;
          case 0x36:
            sprintf(&v3, "getprotobynumber");
            break;
          case 0x37:
            sprintf(&v3, "getservbyname");
            break;
          case 0x38:
            sprintf(&v3, "getservbyport");
            break;
          case 0x39:
            sprintf(&v3, "gethostname");
            break;
          case 0x3A:
            sprintf(&v3, "WSAInstallServiceClassA");
            break;
          case 0x3B:
            sprintf(&v3, "WSAInstallServiceClassW");
            break;
          case 0x3C:
            sprintf(&v3, "WSAIoctl");
            break;
          case 0x3D:
            sprintf(&v3, "WSAJoinLeaf");
            break;
          case 0x3E:
            sprintf(&v3, "WSALookupServiceBeginA");
            break;
          case 0x3F:
            sprintf(&v3, "WSALookupServiceBeginW");
            break;
          case 0x40:
            sprintf(&v3, "WSALookupServiceEnd");
            break;
          case 0x41:
            sprintf(&v3, "WSALookupServiceNextA");
            break;
          case 0x42:
            sprintf(&v3, "WSALookupServiceNextW");
            break;
          case 0x43:
            sprintf(&v3, "WSANSPIoctl");
            break;
          case 0x44:
            sprintf(&v3, "WSANtohl");
            break;
          case 0x45:
            sprintf(&v3, "WSANtohs");
            break;
          case 0x46:
            sprintf(&v3, "WSAProviderConfigChange");
            break;
          case 0x47:
            sprintf(&v3, "WSARecv");
            break;
          case 0x48:
            sprintf(&v3, "WSARecvDisconnect");
            break;
          case 0x49:
            sprintf(&v3, "WSARecvFrom");
            break;
          case 0x4A:
            sprintf(&v3, "WSARemoveServiceClass");
            break;
          case 0x4B:
            sprintf(&v3, "WSAResetEvent");
            break;
          case 0x4C:
            sprintf(&v3, "WSASend");
            break;
          case 0x4D:
            sprintf(&v3, "WSASendDisconnect");
            break;
          case 0x4E:
            sprintf(&v3, "WSASendTo");
            break;
          case 0x4F:
            sprintf(&v3, "WSASetEvent");
            break;
          case 0x50:
            sprintf(&v3, "WSASetServiceA");
            break;
          case 0x51:
            sprintf(&v3, "WSASetServiceW");
            break;
          case 0x52:
            sprintf(&v3, "WSASocketA");
            break;
          case 0x53:
            sprintf(&v3, "WSASocketW");
            break;
          case 0x54:
            sprintf(&v3, "WSAStringToAddressA");
            break;
          case 0x55:
            sprintf(&v3, "WSAStringToAddressW");
            break;
          case 0x56:
            sprintf(&v3, "WSAWaitForMultipleEvents");
            break;
          case 0x57:
            sprintf(&v3, "WSCDeinstallProvider");
            break;
          case 0x58:
            sprintf(&v3, "WSCEnableNSProvider");
            break;
          case 0x59:
            sprintf(&v3, "WSCEnumProtocols");
            break;
          case 0x5A:
            sprintf(&v3, "WSCGetProviderPath");
            break;
          case 0x5B:
            sprintf(&v3, "WSCInstallNameSpace");
            break;
          case 0x5C:
            sprintf(&v3, "WSCInstallProvider");
            break;
          case 0x5D:
            sprintf(&v3, "WSCUnInstallNameSpace");
            break;
          case 0x5E:
            sprintf(&v3, "WSCUpdateProvider");
            break;
          case 0x5F:
            sprintf(&v3, "WSCWriteNameSpaceOrder");
            break;
          case 0x60:
            sprintf(&v3, "WSCWriteProviderOrder");
            break;
          case 0x61:
            sprintf(&v3, "freeaddrinfo");
            break;
          case 0x62:
            sprintf(&v3, "getaddrinfo");
            break;
          case 0x63:
            sprintf(&v3, "getnameinfo");
            break;
          case 0x65:
            sprintf(&v3, "WSAAsyncSelect");
            break;
          case 0x66:
            sprintf(&v3, "WSAAsyncGetHostByAddr");
            break;
          case 0x67:
            sprintf(&v3, "WSAAsyncGetHostByName");
            break;
          case 0x68:
            sprintf(&v3, "WSAAsyncGetProtoByNumber");
            break;
          case 0x69:
            sprintf(&v3, "WSAAsyncGetProtoByName");
            break;
          case 0x6A:
            sprintf(&v3, "WSAAsyncGetServByPort");
            break;
          case 0x6B:
            sprintf(&v3, "WSAAsyncGetServByName");
            break;
          case 0x6C:
            sprintf(&v3, "WSACancelAsyncRequest");
            break;
          case 0x6D:
            sprintf(&v3, "WSASetBlockingHook");
            break;
          case 0x6E:
            sprintf(&v3, "WSAUnhookBlockingHook");
            break;
          case 0x6F:
            sprintf(&v3, "WSAGetLastError");
            break;
          case 0x70:
            sprintf(&v3, "WSASetLastError");
            break;
          case 0x71:
            sprintf(&v3, "WSACancelBlockingCall");
            break;
          case 0x72:
            sprintf(&v3, "WSAIsBlocking");
            break;
          case 0x73:
            sprintf(&v3, "WSAStartup");
            break;
          case 0x74:
            sprintf(&v3, "WSACleanup");
            break;
          case 0x97:
            sprintf(&v3, "__WSAFDIsSet");
            break;
          default:
            break;
        }
      }
    }
  }
  else if ( !_strnicmp(a1, "oleaut32.dll", 0xCu) )
  {
    switch ( a2 )
    {
      case 2:
        sprintf(&v3, "SysAllocString");
        break;
      case 3:
        sprintf(&v3, "SysReAllocString");
        break;
      case 4:
        sprintf(&v3, "SysAllocStringLen");
        break;
      case 5:
        sprintf(&v3, "SysReAllocStringLen");
        break;
      case 6:
        sprintf(&v3, "SysFreeString");
        break;
      case 7:
        sprintf(&v3, "SysStringLen");
        break;
      case 8:
        sprintf(&v3, "VariantInit");
        break;
      case 9:
        sprintf(&v3, "VariantClear");
        break;
      case 0xA:
        sprintf(&v3, "VariantCopy");
        break;
      case 0xB:
        sprintf(&v3, "VariantCopyInd");
        break;
      case 0xC:
        sprintf(&v3, "VariantChangeType");
        break;
      case 0xD:
        sprintf(&v3, "VariantTimeToDosDateTime");
        break;
      case 0xE:
        sprintf(&v3, "DosDateTimeToVariantTime");
        break;
      case 0xF:
        sprintf(&v3, "SafeArrayCreate");
        break;
      case 0x10:
        sprintf(&v3, "SafeArrayDestroy");
        break;
      case 0x11:
        sprintf(&v3, "SafeArrayGetDim");
        break;
      case 0x12:
        sprintf(&v3, "SafeArrayGetElemsize");
        break;
      case 0x13:
        sprintf(&v3, "SafeArrayGetUBound");
        break;
      case 0x14:
        sprintf(&v3, "SafeArrayGetLBound");
        break;
      case 0x15:
        sprintf(&v3, "SafeArrayLock");
        break;
      case 0x16:
        sprintf(&v3, "SafeArrayUnlock");
        break;
      case 0x17:
        sprintf(&v3, "SafeArrayAccessData");
        break;
      case 0x18:
        sprintf(&v3, "SafeArrayUnaccessData");
        break;
      case 0x19:
        sprintf(&v3, "SafeArrayGetElement");
        break;
      case 0x1A:
        sprintf(&v3, "SafeArrayPutElement");
        break;
      case 0x1B:
        sprintf(&v3, "SafeArrayCopy");
        break;
      case 0x1C:
        sprintf(&v3, "DispGetParam");
        break;
      case 0x1D:
        sprintf(&v3, "DispGetIDsOfNames");
        break;
      case 0x1E:
        sprintf(&v3, "DispInvoke");
        break;
      case 0x1F:
        sprintf(&v3, "CreateDispTypeInfo");
        break;
      case 0x20:
        sprintf(&v3, "CreateStdDispatch");
        break;
      case 0x21:
        sprintf(&v3, "RegisterActiveObject");
        break;
      case 0x22:
        sprintf(&v3, "RevokeActiveObject");
        break;
      case 0x23:
        sprintf(&v3, "GetActiveObject");
        break;
      case 0x24:
        sprintf(&v3, "SafeArrayAllocDescriptor");
        break;
      case 0x25:
        sprintf(&v3, "SafeArrayAllocData");
        break;
      case 0x26:
        sprintf(&v3, "SafeArrayDestroyDescriptor");
        break;
      case 0x27:
        sprintf(&v3, "SafeArrayDestroyData");
        break;
      case 0x28:
        sprintf(&v3, "SafeArrayRedim");
        break;
      case 0x29:
        sprintf(&v3, "SafeArrayAllocDescriptorEx");
        break;
      case 0x2A:
        sprintf(&v3, "SafeArrayCreateEx");
        break;
      case 0x2B:
        sprintf(&v3, "SafeArrayCreateVectorEx");
        break;
      case 0x2C:
        sprintf(&v3, "SafeArraySetRecordInfo");
        break;
      case 0x2D:
        sprintf(&v3, "SafeArrayGetRecordInfo");
        break;
      case 0x2E:
        sprintf(&v3, "VarParseNumFromStr");
        break;
      case 0x2F:
        sprintf(&v3, "VarNumFromParseNum");
        break;
      case 0x30:
        sprintf(&v3, "VarI2FromUI1");
        break;
      case 0x31:
        sprintf(&v3, "VarI2FromI4");
        break;
      case 0x32:
        sprintf(&v3, "VarI2FromR4");
        break;
      case 0x33:
        sprintf(&v3, "VarI2FromR8");
        break;
      case 0x34:
        sprintf(&v3, "VarI2FromCy");
        break;
      case 0x35:
        sprintf(&v3, "VarI2FromDate");
        break;
      case 0x36:
        sprintf(&v3, "VarI2FromStr");
        break;
      case 0x37:
        sprintf(&v3, "VarI2FromDisp");
        break;
      case 0x38:
        sprintf(&v3, "VarI2FromBool");
        break;
      case 0x39:
        sprintf(&v3, "SafeArraySetIID");
        break;
      case 0x3A:
        sprintf(&v3, "VarI4FromUI1");
        break;
      case 0x3B:
        sprintf(&v3, "VarI4FromI2");
        break;
      case 0x3C:
        sprintf(&v3, "VarI4FromR4");
        break;
      case 0x3D:
        sprintf(&v3, "VarI4FromR8");
        break;
      case 0x3E:
        sprintf(&v3, "VarI4FromCy");
        break;
      case 0x3F:
        sprintf(&v3, "VarI4FromDate");
        break;
      case 0x40:
        sprintf(&v3, "VarI4FromStr");
        break;
      case 0x41:
        sprintf(&v3, "VarI4FromDisp");
        break;
      case 0x42:
        sprintf(&v3, "VarI4FromBool");
        break;
      case 0x43:
        sprintf(&v3, "SafeArrayGetIID");
        break;
      case 0x44:
        sprintf(&v3, "VarR4FromUI1");
        break;
      case 0x45:
        sprintf(&v3, "VarR4FromI2");
        break;
      case 0x46:
        sprintf(&v3, "VarR4FromI4");
        break;
      case 0x47:
        sprintf(&v3, "VarR4FromR8");
        break;
      case 0x48:
        sprintf(&v3, "VarR4FromCy");
        break;
      case 0x49:
        sprintf(&v3, "VarR4FromDate");
        break;
      case 0x4A:
        sprintf(&v3, "VarR4FromStr");
        break;
      case 0x4B:
        sprintf(&v3, "VarR4FromDisp");
        break;
      case 0x4C:
        sprintf(&v3, "VarR4FromBool");
        break;
      case 0x4D:
        sprintf(&v3, "SafeArrayGetVartype");
        break;
      case 0x4E:
        sprintf(&v3, "VarR8FromUI1");
        break;
      case 0x4F:
        sprintf(&v3, "VarR8FromI2");
        break;
      case 0x50:
        sprintf(&v3, "VarR8FromI4");
        break;
      case 0x51:
        sprintf(&v3, "VarR8FromR4");
        break;
      case 0x52:
        sprintf(&v3, "VarR8FromCy");
        break;
      case 0x53:
        sprintf(&v3, "VarR8FromDate");
        break;
      case 0x54:
        sprintf(&v3, "VarR8FromStr");
        break;
      case 0x55:
        sprintf(&v3, "VarR8FromDisp");
        break;
      case 0x56:
        sprintf(&v3, "VarR8FromBool");
        break;
      case 0x57:
        sprintf(&v3, "VarFormat");
        break;
      case 0x58:
        sprintf(&v3, "VarDateFromUI1");
        break;
      case 0x59:
        sprintf(&v3, "VarDateFromI2");
        break;
      case 0x5A:
        sprintf(&v3, "VarDateFromI4");
        break;
      case 0x5B:
        sprintf(&v3, "VarDateFromR4");
        break;
      case 0x5C:
        sprintf(&v3, "VarDateFromR8");
        break;
      case 0x5D:
        sprintf(&v3, "VarDateFromCy");
        break;
      case 0x5E:
        sprintf(&v3, "VarDateFromStr");
        break;
      case 0x5F:
        sprintf(&v3, "VarDateFromDisp");
        break;
      case 0x60:
        sprintf(&v3, "VarDateFromBool");
        break;
      case 0x61:
        sprintf(&v3, "VarFormatDateTime");
        break;
      case 0x62:
        sprintf(&v3, "VarCyFromUI1");
        break;
      case 0x63:
        sprintf(&v3, "VarCyFromI2");
        break;
      case 0x64:
        sprintf(&v3, "VarCyFromI4");
        break;
      case 0x65:
        sprintf(&v3, "VarCyFromR4");
        break;
      case 0x66:
        sprintf(&v3, "VarCyFromR8");
        break;
      case 0x67:
        sprintf(&v3, "VarCyFromDate");
        break;
      case 0x68:
        sprintf(&v3, "VarCyFromStr");
        break;
      case 0x69:
        sprintf(&v3, "VarCyFromDisp");
        break;
      case 0x6A:
        sprintf(&v3, "VarCyFromBool");
        break;
      case 0x6B:
        sprintf(&v3, "VarFormatNumber");
        break;
      case 0x6C:
        sprintf(&v3, "VarBstrFromUI1");
        break;
      case 0x6D:
        sprintf(&v3, "VarBstrFromI2");
        break;
      case 0x6E:
        sprintf(&v3, "VarBstrFromI4");
        break;
      case 0x6F:
        sprintf(&v3, "VarBstrFromR4");
        break;
      case 0x70:
        sprintf(&v3, "VarBstrFromR8");
        break;
      case 0x71:
        sprintf(&v3, "VarBstrFromCy");
        break;
      case 0x72:
        sprintf(&v3, "VarBstrFromDate");
        break;
      case 0x73:
        sprintf(&v3, "VarBstrFromDisp");
        break;
      case 0x74:
        sprintf(&v3, "VarBstrFromBool");
        break;
      case 0x75:
        sprintf(&v3, "VarFormatPercent");
        break;
      case 0x76:
        sprintf(&v3, "VarBoolFromUI1");
        break;
      case 0x77:
        sprintf(&v3, "VarBoolFromI2");
        break;
      case 0x78:
        sprintf(&v3, "VarBoolFromI4");
        break;
      case 0x79:
        sprintf(&v3, "VarBoolFromR4");
        break;
      case 0x7A:
        sprintf(&v3, "VarBoolFromR8");
        break;
      case 0x7B:
        sprintf(&v3, "VarBoolFromDate");
        break;
      case 0x7C:
        sprintf(&v3, "VarBoolFromCy");
        break;
      case 0x7D:
        sprintf(&v3, "VarBoolFromStr");
        break;
      case 0x7E:
        sprintf(&v3, "VarBoolFromDisp");
        break;
      case 0x7F:
        sprintf(&v3, "VarFormatCurrency");
        break;
      case 0x80:
        sprintf(&v3, "VarWeekdayName");
        break;
      case 0x81:
        sprintf(&v3, "VarMonthName");
        break;
      case 0x82:
        sprintf(&v3, "VarUI1FromI2");
        break;
      case 0x83:
        sprintf(&v3, "VarUI1FromI4");
        break;
      case 0x84:
        sprintf(&v3, "VarUI1FromR4");
        break;
      case 0x85:
        sprintf(&v3, "VarUI1FromR8");
        break;
      case 0x86:
        sprintf(&v3, "VarUI1FromCy");
        break;
      case 0x87:
        sprintf(&v3, "VarUI1FromDate");
        break;
      case 0x88:
        sprintf(&v3, "VarUI1FromStr");
        break;
      case 0x89:
        sprintf(&v3, "VarUI1FromDisp");
        break;
      case 0x8A:
        sprintf(&v3, "VarUI1FromBool");
        break;
      case 0x8B:
        sprintf(&v3, "VarFormatFromTokens");
        break;
      case 0x8C:
        sprintf(&v3, "VarTokenizeFormatString");
        break;
      case 0x8D:
        sprintf(&v3, "VarAdd");
        break;
      case 0x8E:
        sprintf(&v3, "VarAnd");
        break;
      case 0x8F:
        sprintf(&v3, "VarDiv");
        break;
      case 0x90:
        sprintf(&v3, "DllCanUnloadNow");
        break;
      case 0x91:
        sprintf(&v3, "DllGetClassObject");
        break;
      case 0x92:
        sprintf(&v3, "DispCallFunc");
        break;
      case 0x93:
        sprintf(&v3, "VariantChangeTypeEx");
        break;
      case 0x94:
        sprintf(&v3, "SafeArrayPtrOfIndex");
        break;
      case 0x95:
        sprintf(&v3, "SysStringByteLen");
        break;
      case 0x96:
        sprintf(&v3, "SysAllocStringByteLen");
        break;
      case 0x97:
        sprintf(&v3, "DllRegisterServer");
        break;
      case 0x98:
        sprintf(&v3, "VarEqv");
        break;
      case 0x99:
        sprintf(&v3, "VarIdiv");
        break;
      case 0x9A:
        sprintf(&v3, "VarImp");
        break;
      case 0x9B:
        sprintf(&v3, "VarMod");
        break;
      case 0x9C:
        sprintf(&v3, "VarMul");
        break;
      case 0x9D:
        sprintf(&v3, "VarOr");
        break;
      case 0x9E:
        sprintf(&v3, "VarPow");
        break;
      case 0x9F:
        sprintf(&v3, "VarSub");
        break;
      case 0xA0:
        sprintf(&v3, "CreateTypeLib");
        break;
      case 0xA1:
        sprintf(&v3, "LoadTypeLib");
        break;
      case 0xA2:
        sprintf(&v3, "LoadRegTypeLib");
        break;
      case 0xA3:
        sprintf(&v3, "RegisterTypeLib");
        break;
      case 0xA4:
        sprintf(&v3, "QueryPathOfRegTypeLib");
        break;
      case 0xA5:
        sprintf(&v3, "LHashValOfNameSys");
        break;
      case 0xA6:
        sprintf(&v3, "LHashValOfNameSysA");
        break;
      case 0xA7:
        sprintf(&v3, "VarXor");
        break;
      case 0xA8:
        sprintf(&v3, "VarAbs");
        break;
      case 0xA9:
        sprintf(&v3, "VarFix");
        break;
      case 0xAA:
        sprintf(&v3, "OaBuildVersion");
        break;
      case 0xAB:
        sprintf(&v3, "ClearCustData");
        break;
      case 0xAC:
        sprintf(&v3, "VarInt");
        break;
      case 0xAD:
        sprintf(&v3, "VarNeg");
        break;
      case 0xAE:
        sprintf(&v3, "VarNot");
        break;
      case 0xAF:
        sprintf(&v3, "VarRound");
        break;
      case 0xB0:
        sprintf(&v3, "VarCmp");
        break;
      case 0xB1:
        sprintf(&v3, "VarDecAdd");
        break;
      case 0xB2:
        sprintf(&v3, "VarDecDiv");
        break;
      case 0xB3:
        sprintf(&v3, "VarDecMul");
        break;
      case 0xB4:
        sprintf(&v3, "CreateTypeLib2");
        break;
      case 0xB5:
        sprintf(&v3, "VarDecSub");
        break;
      case 0xB6:
        sprintf(&v3, "VarDecAbs");
        break;
      case 0xB7:
        sprintf(&v3, "LoadTypeLibEx");
        break;
      case 0xB8:
        sprintf(&v3, "SystemTimeToVariantTime");
        break;
      case 0xB9:
        sprintf(&v3, "VariantTimeToSystemTime");
        break;
      case 0xBA:
        sprintf(&v3, "UnRegisterTypeLib");
        break;
      case 0xBB:
        sprintf(&v3, "VarDecFix");
        break;
      case 0xBC:
        sprintf(&v3, "VarDecInt");
        break;
      case 0xBD:
        sprintf(&v3, "VarDecNeg");
        break;
      case 0xBE:
        sprintf(&v3, "VarDecFromUI1");
        break;
      case 0xBF:
        sprintf(&v3, "VarDecFromI2");
        break;
      case 0xC0:
        sprintf(&v3, "VarDecFromI4");
        break;
      case 0xC1:
        sprintf(&v3, "VarDecFromR4");
        break;
      case 0xC2:
        sprintf(&v3, "VarDecFromR8");
        break;
      case 0xC3:
        sprintf(&v3, "VarDecFromDate");
        break;
      case 0xC4:
        sprintf(&v3, "VarDecFromCy");
        break;
      case 0xC5:
        sprintf(&v3, "VarDecFromStr");
        break;
      case 0xC6:
        sprintf(&v3, "VarDecFromDisp");
        break;
      case 0xC7:
        sprintf(&v3, "VarDecFromBool");
        break;
      case 0xC8:
        sprintf(&v3, "GetErrorInfo");
        break;
      case 0xC9:
        sprintf(&v3, "SetErrorInfo");
        break;
      case 0xCA:
        sprintf(&v3, "CreateErrorInfo");
        break;
      case 0xCB:
        sprintf(&v3, "VarDecRound");
        break;
      case 0xCC:
        sprintf(&v3, "VarDecCmp");
        break;
      case 0xCD:
        sprintf(&v3, "VarI2FromI1");
        break;
      case 0xCE:
        sprintf(&v3, "VarI2FromUI2");
        break;
      case 0xCF:
        sprintf(&v3, "VarI2FromUI4");
        break;
      case 0xD0:
        sprintf(&v3, "VarI2FromDec");
        break;
      case 0xD1:
        sprintf(&v3, "VarI4FromI1");
        break;
      case 0xD2:
        sprintf(&v3, "VarI4FromUI2");
        break;
      case 0xD3:
        sprintf(&v3, "VarI4FromUI4");
        break;
      case 0xD4:
        sprintf(&v3, "VarI4FromDec");
        break;
      case 0xD5:
        sprintf(&v3, "VarR4FromI1");
        break;
      case 0xD6:
        sprintf(&v3, "VarR4FromUI2");
        break;
      case 0xD7:
        sprintf(&v3, "VarR4FromUI4");
        break;
      case 0xD8:
        sprintf(&v3, "VarR4FromDec");
        break;
      case 0xD9:
        sprintf(&v3, "VarR8FromI1");
        break;
      case 0xDA:
        sprintf(&v3, "VarR8FromUI2");
        break;
      case 0xDB:
        sprintf(&v3, "VarR8FromUI4");
        break;
      case 0xDC:
        sprintf(&v3, "VarR8FromDec");
        break;
      case 0xDD:
        sprintf(&v3, "VarDateFromI1");
        break;
      case 0xDE:
        sprintf(&v3, "VarDateFromUI2");
        break;
      case 0xDF:
        sprintf(&v3, "VarDateFromUI4");
        break;
      case 0xE0:
        sprintf(&v3, "VarDateFromDec");
        break;
      case 0xE1:
        sprintf(&v3, "VarCyFromI1");
        break;
      case 0xE2:
        sprintf(&v3, "VarCyFromUI2");
        break;
      case 0xE3:
        sprintf(&v3, "VarCyFromUI4");
        break;
      case 0xE4:
        sprintf(&v3, "VarCyFromDec");
        break;
      case 0xE5:
        sprintf(&v3, "VarBstrFromI1");
        break;
      case 0xE6:
        sprintf(&v3, "VarBstrFromUI2");
        break;
      case 0xE7:
        sprintf(&v3, "VarBstrFromUI4");
        break;
      case 0xE8:
        sprintf(&v3, "VarBstrFromDec");
        break;
      case 0xE9:
        sprintf(&v3, "VarBoolFromI1");
        break;
      case 0xEA:
        sprintf(&v3, "VarBoolFromUI2");
        break;
      case 0xEB:
        sprintf(&v3, "VarBoolFromUI4");
        break;
      case 0xEC:
        sprintf(&v3, "VarBoolFromDec");
        break;
      case 0xED:
        sprintf(&v3, "VarUI1FromI1");
        break;
      case 0xEE:
        sprintf(&v3, "VarUI1FromUI2");
        break;
      case 0xEF:
        sprintf(&v3, "VarUI1FromUI4");
        break;
      case 0xF0:
        sprintf(&v3, "VarUI1FromDec");
        break;
      case 0xF1:
        sprintf(&v3, "VarDecFromI1");
        break;
      case 0xF2:
        sprintf(&v3, "VarDecFromUI2");
        break;
      case 0xF3:
        sprintf(&v3, "VarDecFromUI4");
        break;
      case 0xF4:
        sprintf(&v3, "VarI1FromUI1");
        break;
      case 0xF5:
        sprintf(&v3, "VarI1FromI2");
        break;
      case 0xF6:
        sprintf(&v3, "VarI1FromI4");
        break;
      case 0xF7:
        sprintf(&v3, "VarI1FromR4");
        break;
      case 0xF8:
        sprintf(&v3, "VarI1FromR8");
        break;
      case 0xF9:
        sprintf(&v3, "VarI1FromDate");
        break;
      case 0xFA:
        sprintf(&v3, "VarI1FromCy");
        break;
      case 0xFB:
        sprintf(&v3, "VarI1FromStr");
        break;
      case 0xFC:
        sprintf(&v3, "VarI1FromDisp");
        break;
      case 0xFD:
        sprintf(&v3, "VarI1FromBool");
        break;
      case 0xFE:
        sprintf(&v3, "VarI1FromUI2");
        break;
      case 0xFF:
        sprintf(&v3, "VarI1FromUI4");
        break;
      case 0x100:
        sprintf(&v3, "VarI1FromDec");
        break;
      case 0x101:
        sprintf(&v3, "VarUI2FromUI1");
        break;
      case 0x102:
        sprintf(&v3, "VarUI2FromI2");
        break;
      case 0x103:
        sprintf(&v3, "VarUI2FromI4");
        break;
      case 0x104:
        sprintf(&v3, "VarUI2FromR4");
        break;
      case 0x105:
        sprintf(&v3, "VarUI2FromR8");
        break;
      case 0x106:
        sprintf(&v3, "VarUI2FromDate");
        break;
      case 0x107:
        sprintf(&v3, "VarUI2FromCy");
        break;
      case 0x108:
        sprintf(&v3, "VarUI2FromStr");
        break;
      case 0x109:
        sprintf(&v3, "VarUI2FromDisp");
        break;
      case 0x10A:
        sprintf(&v3, "VarUI2FromBool");
        break;
      case 0x10B:
        sprintf(&v3, "VarUI2FromI1");
        break;
      case 0x10C:
        sprintf(&v3, "VarUI2FromUI4");
        break;
      case 0x10D:
        sprintf(&v3, "VarUI2FromDec");
        break;
      case 0x10E:
        sprintf(&v3, "VarUI4FromUI1");
        break;
      case 0x10F:
        sprintf(&v3, "VarUI4FromI2");
        break;
      case 0x110:
        sprintf(&v3, "VarUI4FromI4");
        break;
      case 0x111:
        sprintf(&v3, "VarUI4FromR4");
        break;
      case 0x112:
        sprintf(&v3, "VarUI4FromR8");
        break;
      case 0x113:
        sprintf(&v3, "VarUI4FromDate");
        break;
      case 0x114:
        sprintf(&v3, "VarUI4FromCy");
        break;
      case 0x115:
        sprintf(&v3, "VarUI4FromStr");
        break;
      case 0x116:
        sprintf(&v3, "VarUI4FromDisp");
        break;
      case 0x117:
        sprintf(&v3, "VarUI4FromBool");
        break;
      case 0x118:
        sprintf(&v3, "VarUI4FromI1");
        break;
      case 0x119:
        sprintf(&v3, "VarUI4FromUI2");
        break;
      case 0x11A:
        sprintf(&v3, "VarUI4FromDec");
        break;
      case 0x11B:
        sprintf(&v3, "BSTR_UserSize");
        break;
      case 0x11C:
        sprintf(&v3, "BSTR_UserMarshal");
        break;
      case 0x11D:
        sprintf(&v3, "BSTR_UserUnmarshal");
        break;
      case 0x11E:
        sprintf(&v3, "BSTR_UserFree");
        break;
      case 0x11F:
        sprintf(&v3, "VARIANT_UserSize");
        break;
      case 0x120:
        sprintf(&v3, "VARIANT_UserMarshal");
        break;
      case 0x121:
        sprintf(&v3, "VARIANT_UserUnmarshal");
        break;
      case 0x122:
        sprintf(&v3, "VARIANT_UserFree");
        break;
      case 0x123:
        sprintf(&v3, "LPSAFEARRAY_UserSize");
        break;
      case 0x124:
        sprintf(&v3, "LPSAFEARRAY_UserMarshal");
        break;
      case 0x125:
        sprintf(&v3, "LPSAFEARRAY_UserUnmarshal");
        break;
      case 0x126:
        sprintf(&v3, "LPSAFEARRAY_UserFree");
        break;
      case 0x127:
        sprintf(&v3, "LPSAFEARRAY_Size");
        break;
      case 0x128:
        sprintf(&v3, "LPSAFEARRAY_Marshal");
        break;
      case 0x129:
        sprintf(&v3, "LPSAFEARRAY_Unmarshal");
        break;
      case 0x12A:
        sprintf(&v3, "VarDecCmpR8");
        break;
      case 0x12B:
        sprintf(&v3, "VarCyAdd");
        break;
      case 0x12C:
        sprintf(&v3, "DllUnregisterServer");
        break;
      case 0x12D:
        sprintf(&v3, "OACreateTypeLib2");
        break;
      case 0x12F:
        sprintf(&v3, "VarCyMul");
        break;
      case 0x130:
        sprintf(&v3, "VarCyMulI4");
        break;
      case 0x131:
        sprintf(&v3, "VarCySub");
        break;
      case 0x132:
        sprintf(&v3, "VarCyAbs");
        break;
      case 0x133:
        sprintf(&v3, "VarCyFix");
        break;
      case 0x134:
        sprintf(&v3, "VarCyInt");
        break;
      case 0x135:
        sprintf(&v3, "VarCyNeg");
        break;
      case 0x136:
        sprintf(&v3, "VarCyRound");
        break;
      case 0x137:
        sprintf(&v3, "VarCyCmp");
        break;
      case 0x138:
        sprintf(&v3, "VarCyCmpR8");
        break;
      case 0x139:
        sprintf(&v3, "VarBstrCat");
        break;
      case 0x13A:
        sprintf(&v3, "VarBstrCmp");
        break;
      case 0x13B:
        sprintf(&v3, "VarR8Pow");
        break;
      case 0x13C:
        sprintf(&v3, "VarR4CmpR8");
        break;
      case 0x13D:
        sprintf(&v3, "VarR8Round");
        break;
      case 0x13E:
        sprintf(&v3, "VarCat");
        break;
      case 0x13F:
        sprintf(&v3, "VarDateFromUdateEx");
        break;
      case 0x142:
        sprintf(&v3, "GetRecordInfoFromGuids");
        break;
      case 0x143:
        sprintf(&v3, "GetRecordInfoFromTypeInfo");
        break;
      case 0x145:
        sprintf(&v3, "SetVarConversionLocaleSetting");
        break;
      case 0x146:
        sprintf(&v3, "GetVarConversionLocaleSetting");
        break;
      case 0x147:
        sprintf(&v3, "SetOaNoCache");
        break;
      case 0x149:
        sprintf(&v3, "VarCyMulI8");
        break;
      case 0x14A:
        sprintf(&v3, "VarDateFromUdate");
        break;
      case 0x14B:
        sprintf(&v3, "VarUdateFromDate");
        break;
      case 0x14C:
        sprintf(&v3, "GetAltMonthNames");
        break;
      case 0x14D:
        sprintf(&v3, "VarI8FromUI1");
        break;
      case 0x14E:
        sprintf(&v3, "VarI8FromI2");
        break;
      case 0x14F:
        sprintf(&v3, "VarI8FromR4");
        break;
      case 0x150:
        sprintf(&v3, "VarI8FromR8");
        break;
      case 0x151:
        sprintf(&v3, "VarI8FromCy");
        break;
      case 0x152:
        sprintf(&v3, "VarI8FromDate");
        break;
      case 0x153:
        sprintf(&v3, "VarI8FromStr");
        break;
      case 0x154:
        sprintf(&v3, "VarI8FromDisp");
        break;
      case 0x155:
        sprintf(&v3, "VarI8FromBool");
        break;
      case 0x156:
        sprintf(&v3, "VarI8FromI1");
        break;
      case 0x157:
        sprintf(&v3, "VarI8FromUI2");
        break;
      case 0x158:
        sprintf(&v3, "VarI8FromUI4");
        break;
      case 0x159:
        sprintf(&v3, "VarI8FromDec");
        break;
      case 0x15A:
        sprintf(&v3, "VarI2FromI8");
        break;
      case 0x15B:
        sprintf(&v3, "VarI2FromUI8");
        break;
      case 0x15C:
        sprintf(&v3, "VarI4FromI8");
        break;
      case 0x15D:
        sprintf(&v3, "VarI4FromUI8");
        break;
      case 0x168:
        sprintf(&v3, "VarR4FromI8");
        break;
      case 0x169:
        sprintf(&v3, "VarR4FromUI8");
        break;
      case 0x16A:
        sprintf(&v3, "VarR8FromI8");
        break;
      case 0x16B:
        sprintf(&v3, "VarR8FromUI8");
        break;
      case 0x16C:
        sprintf(&v3, "VarDateFromI8");
        break;
      case 0x16D:
        sprintf(&v3, "VarDateFromUI8");
        break;
      case 0x16E:
        sprintf(&v3, "VarCyFromI8");
        break;
      case 0x16F:
        sprintf(&v3, "VarCyFromUI8");
        break;
      case 0x170:
        sprintf(&v3, "VarBstrFromI8");
        break;
      case 0x171:
        sprintf(&v3, "VarBstrFromUI8");
        break;
      case 0x172:
        sprintf(&v3, "VarBoolFromI8");
        break;
      case 0x173:
        sprintf(&v3, "VarBoolFromUI8");
        break;
      case 0x174:
        sprintf(&v3, "VarUI1FromI8");
        break;
      case 0x175:
        sprintf(&v3, "VarUI1FromUI8");
        break;
      case 0x176:
        sprintf(&v3, "VarDecFromI8");
        break;
      case 0x177:
        sprintf(&v3, "VarDecFromUI8");
        break;
      case 0x178:
        sprintf(&v3, "VarI1FromI8");
        break;
      case 0x179:
        sprintf(&v3, "VarI1FromUI8");
        break;
      case 0x17A:
        sprintf(&v3, "VarUI2FromI8");
        break;
      case 0x17B:
        sprintf(&v3, "VarUI2FromUI8");
        break;
      case 0x191:
        sprintf(&v3, "OleLoadPictureEx");
        break;
      case 0x192:
        sprintf(&v3, "OleLoadPictureFileEx");
        break;
      case 0x19B:
        sprintf(&v3, "SafeArrayCreateVector");
        break;
      case 0x19C:
        sprintf(&v3, "SafeArrayCopyData");
        break;
      case 0x19D:
        sprintf(&v3, "VectorFromBstr");
        break;
      case 0x19E:
        sprintf(&v3, "BstrFromVector");
        break;
      case 0x19F:
        sprintf(&v3, "OleIconToCursor");
        break;
      case 0x1A0:
        sprintf(&v3, "OleCreatePropertyFrameIndirect");
        break;
      case 0x1A1:
        sprintf(&v3, "OleCreatePropertyFrame");
        break;
      case 0x1A2:
        sprintf(&v3, "OleLoadPicture");
        break;
      case 0x1A3:
        sprintf(&v3, "OleCreatePictureIndirect");
        break;
      case 0x1A4:
        sprintf(&v3, "OleCreateFontIndirect");
        break;
      case 0x1A5:
        sprintf(&v3, "OleTranslateColor");
        break;
      case 0x1A6:
        sprintf(&v3, "OleLoadPictureFile");
        break;
      case 0x1A7:
        sprintf(&v3, "OleSavePictureFile");
        break;
      case 0x1A8:
        sprintf(&v3, "OleLoadPicturePath");
        break;
      case 0x1A9:
        sprintf(&v3, "VarUI4FromI8");
        break;
      case 0x1AA:
        sprintf(&v3, "VarUI4FromUI8");
        break;
      case 0x1AB:
        sprintf(&v3, "VarI8FromUI8");
        break;
      case 0x1AC:
        sprintf(&v3, "VarUI8FromI8");
        break;
      case 0x1AD:
        sprintf(&v3, "VarUI8FromUI1");
        break;
      case 0x1AE:
        sprintf(&v3, "VarUI8FromI2");
        break;
      case 0x1AF:
        sprintf(&v3, "VarUI8FromR4");
        break;
      case 0x1B0:
        sprintf(&v3, "VarUI8FromR8");
        break;
      case 0x1B1:
        sprintf(&v3, "VarUI8FromCy");
        break;
      case 0x1B2:
        sprintf(&v3, "VarUI8FromDate");
        break;
      case 0x1B3:
        sprintf(&v3, "VarUI8FromStr");
        break;
      case 0x1B4:
        sprintf(&v3, "VarUI8FromDisp");
        break;
      case 0x1B5:
        sprintf(&v3, "VarUI8FromBool");
        break;
      case 0x1B6:
        sprintf(&v3, "VarUI8FromI1");
        break;
      case 0x1B7:
        sprintf(&v3, "VarUI8FromUI2");
        break;
      case 0x1B8:
        sprintf(&v3, "VarUI8FromUI4");
        break;
      case 0x1B9:
        sprintf(&v3, "VarUI8FromDec");
        break;
      case 0x1BA:
        sprintf(&v3, "RegisterTypeLibForUser");
        break;
      case 0x1BB:
        sprintf(&v3, "UnRegisterTypeLibForUser");
        break;
      default:
        break;
    }
  }
  if ( !v3 )
    sprintf(&v3, "ord%u", (unsigned __int16)a2);
  return sub_4DDFC0(&v3);
}
