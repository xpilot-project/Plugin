// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: airplaneconfig.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Xpilot {

  /// <summary>Holder for reflection information generated from airplaneconfig.proto</summary>
  public static partial class AirplaneconfigReflection {

    #region Descriptor
    /// <summary>File descriptor for airplaneconfig.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static AirplaneconfigReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "ChRhaXJwbGFuZWNvbmZpZy5wcm90bxIGeHBpbG90Io4FCg5BaXJwbGFuZUNv",
            "bmZpZxIVCghjYWxsc2lnbhgBIAEoCUgAiAEBEkAKBmxpZ2h0cxgCIAEoCzIr",
            "LnhwaWxvdC5BaXJwbGFuZUNvbmZpZy5BaXJwbGFuZUNvbmZpZ0xpZ2h0c0gB",
            "iAEBEhYKCWdlYXJfZG93bhgDIAEoCEgCiAEBEhIKBWZsYXBzGAQgASgCSAOI",
            "AQESFwoKZW5naW5lc19vbhgFIAEoCEgEiAEBEh4KEXNwb2lsZXJzX2RlcGxv",
            "eWVkGAYgASgISAWIAQESGwoOcmV2ZXJzZV90aHJ1c3QYByABKAhIBogBARIW",
            "Cglvbl9ncm91bmQYCCABKAhIB4gBARqSAgoUQWlycGxhbmVDb25maWdMaWdo",
            "dHMSHQoQc3Ryb2JlX2xpZ2h0c19vbhgBIAEoCEgAiAEBEh4KEWxhbmRpbmdf",
            "bGlnaHRzX29uGAIgASgISAGIAQESGwoOdGF4aV9saWdodHNfb24YAyABKAhI",
            "AogBARIdChBiZWFjb25fbGlnaHRzX29uGAQgASgISAOIAQESGgoNbmF2X2xp",
            "Z2h0c19vbhgFIAEoCEgEiAEBQhMKEV9zdHJvYmVfbGlnaHRzX29uQhQKEl9s",
            "YW5kaW5nX2xpZ2h0c19vbkIRCg9fdGF4aV9saWdodHNfb25CEwoRX2JlYWNv",
            "bl9saWdodHNfb25CEAoOX25hdl9saWdodHNfb25CCwoJX2NhbGxzaWduQgkK",
            "B19saWdodHNCDAoKX2dlYXJfZG93bkIICgZfZmxhcHNCDQoLX2VuZ2luZXNf",
            "b25CFAoSX3Nwb2lsZXJzX2RlcGxveWVkQhEKD19yZXZlcnNlX3RocnVzdEIM",
            "Cgpfb25fZ3JvdW5kYgZwcm90bzM="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Xpilot.AirplaneConfig), global::Xpilot.AirplaneConfig.Parser, new[]{ "Callsign", "Lights", "GearDown", "Flaps", "EnginesOn", "SpoilersDeployed", "ReverseThrust", "OnGround" }, new[]{ "Callsign", "Lights", "GearDown", "Flaps", "EnginesOn", "SpoilersDeployed", "ReverseThrust", "OnGround" }, null, null, new pbr::GeneratedClrTypeInfo[] { new pbr::GeneratedClrTypeInfo(typeof(global::Xpilot.AirplaneConfig.Types.AirplaneConfigLights), global::Xpilot.AirplaneConfig.Types.AirplaneConfigLights.Parser, new[]{ "StrobeLightsOn", "LandingLightsOn", "TaxiLightsOn", "BeaconLightsOn", "NavLightsOn" }, new[]{ "StrobeLightsOn", "LandingLightsOn", "TaxiLightsOn", "BeaconLightsOn", "NavLightsOn" }, null, null, null)})
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class AirplaneConfig : pb::IMessage<AirplaneConfig>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<AirplaneConfig> _parser = new pb::MessageParser<AirplaneConfig>(() => new AirplaneConfig());
    private pb::UnknownFieldSet _unknownFields;
    private int _hasBits0;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<AirplaneConfig> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Xpilot.AirplaneconfigReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public AirplaneConfig() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public AirplaneConfig(AirplaneConfig other) : this() {
      _hasBits0 = other._hasBits0;
      callsign_ = other.callsign_;
      lights_ = other.lights_ != null ? other.lights_.Clone() : null;
      gearDown_ = other.gearDown_;
      flaps_ = other.flaps_;
      enginesOn_ = other.enginesOn_;
      spoilersDeployed_ = other.spoilersDeployed_;
      reverseThrust_ = other.reverseThrust_;
      onGround_ = other.onGround_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public AirplaneConfig Clone() {
      return new AirplaneConfig(this);
    }

    /// <summary>Field number for the "callsign" field.</summary>
    public const int CallsignFieldNumber = 1;
    private string callsign_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Callsign {
      get { return callsign_ ?? ""; }
      set {
        callsign_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }
    /// <summary>Gets whether the "callsign" field is set</summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool HasCallsign {
      get { return callsign_ != null; }
    }
    /// <summary>Clears the value of the "callsign" field</summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void ClearCallsign() {
      callsign_ = null;
    }

    /// <summary>Field number for the "lights" field.</summary>
    public const int LightsFieldNumber = 2;
    private global::Xpilot.AirplaneConfig.Types.AirplaneConfigLights lights_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Xpilot.AirplaneConfig.Types.AirplaneConfigLights Lights {
      get { return lights_; }
      set {
        lights_ = value;
      }
    }

    /// <summary>Field number for the "gear_down" field.</summary>
    public const int GearDownFieldNumber = 3;
    private bool gearDown_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool GearDown {
      get { if ((_hasBits0 & 1) != 0) { return gearDown_; } else { return false; } }
      set {
        _hasBits0 |= 1;
        gearDown_ = value;
      }
    }
    /// <summary>Gets whether the "gear_down" field is set</summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool HasGearDown {
      get { return (_hasBits0 & 1) != 0; }
    }
    /// <summary>Clears the value of the "gear_down" field</summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void ClearGearDown() {
      _hasBits0 &= ~1;
    }

    /// <summary>Field number for the "flaps" field.</summary>
    public const int FlapsFieldNumber = 4;
    private float flaps_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public float Flaps {
      get { if ((_hasBits0 & 2) != 0) { return flaps_; } else { return 0F; } }
      set {
        _hasBits0 |= 2;
        flaps_ = value;
      }
    }
    /// <summary>Gets whether the "flaps" field is set</summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool HasFlaps {
      get { return (_hasBits0 & 2) != 0; }
    }
    /// <summary>Clears the value of the "flaps" field</summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void ClearFlaps() {
      _hasBits0 &= ~2;
    }

    /// <summary>Field number for the "engines_on" field.</summary>
    public const int EnginesOnFieldNumber = 5;
    private bool enginesOn_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool EnginesOn {
      get { if ((_hasBits0 & 4) != 0) { return enginesOn_; } else { return false; } }
      set {
        _hasBits0 |= 4;
        enginesOn_ = value;
      }
    }
    /// <summary>Gets whether the "engines_on" field is set</summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool HasEnginesOn {
      get { return (_hasBits0 & 4) != 0; }
    }
    /// <summary>Clears the value of the "engines_on" field</summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void ClearEnginesOn() {
      _hasBits0 &= ~4;
    }

    /// <summary>Field number for the "spoilers_deployed" field.</summary>
    public const int SpoilersDeployedFieldNumber = 6;
    private bool spoilersDeployed_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool SpoilersDeployed {
      get { if ((_hasBits0 & 8) != 0) { return spoilersDeployed_; } else { return false; } }
      set {
        _hasBits0 |= 8;
        spoilersDeployed_ = value;
      }
    }
    /// <summary>Gets whether the "spoilers_deployed" field is set</summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool HasSpoilersDeployed {
      get { return (_hasBits0 & 8) != 0; }
    }
    /// <summary>Clears the value of the "spoilers_deployed" field</summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void ClearSpoilersDeployed() {
      _hasBits0 &= ~8;
    }

    /// <summary>Field number for the "reverse_thrust" field.</summary>
    public const int ReverseThrustFieldNumber = 7;
    private bool reverseThrust_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool ReverseThrust {
      get { if ((_hasBits0 & 16) != 0) { return reverseThrust_; } else { return false; } }
      set {
        _hasBits0 |= 16;
        reverseThrust_ = value;
      }
    }
    /// <summary>Gets whether the "reverse_thrust" field is set</summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool HasReverseThrust {
      get { return (_hasBits0 & 16) != 0; }
    }
    /// <summary>Clears the value of the "reverse_thrust" field</summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void ClearReverseThrust() {
      _hasBits0 &= ~16;
    }

    /// <summary>Field number for the "on_ground" field.</summary>
    public const int OnGroundFieldNumber = 8;
    private bool onGround_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool OnGround {
      get { if ((_hasBits0 & 32) != 0) { return onGround_; } else { return false; } }
      set {
        _hasBits0 |= 32;
        onGround_ = value;
      }
    }
    /// <summary>Gets whether the "on_ground" field is set</summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool HasOnGround {
      get { return (_hasBits0 & 32) != 0; }
    }
    /// <summary>Clears the value of the "on_ground" field</summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void ClearOnGround() {
      _hasBits0 &= ~32;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as AirplaneConfig);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(AirplaneConfig other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (Callsign != other.Callsign) return false;
      if (!object.Equals(Lights, other.Lights)) return false;
      if (GearDown != other.GearDown) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(Flaps, other.Flaps)) return false;
      if (EnginesOn != other.EnginesOn) return false;
      if (SpoilersDeployed != other.SpoilersDeployed) return false;
      if (ReverseThrust != other.ReverseThrust) return false;
      if (OnGround != other.OnGround) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (HasCallsign) hash ^= Callsign.GetHashCode();
      if (lights_ != null) hash ^= Lights.GetHashCode();
      if (HasGearDown) hash ^= GearDown.GetHashCode();
      if (HasFlaps) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(Flaps);
      if (HasEnginesOn) hash ^= EnginesOn.GetHashCode();
      if (HasSpoilersDeployed) hash ^= SpoilersDeployed.GetHashCode();
      if (HasReverseThrust) hash ^= ReverseThrust.GetHashCode();
      if (HasOnGround) hash ^= OnGround.GetHashCode();
      if (_unknownFields != null) {
        hash ^= _unknownFields.GetHashCode();
      }
      return hash;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void WriteTo(pb::CodedOutputStream output) {
    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      output.WriteRawMessage(this);
    #else
      if (HasCallsign) {
        output.WriteRawTag(10);
        output.WriteString(Callsign);
      }
      if (lights_ != null) {
        output.WriteRawTag(18);
        output.WriteMessage(Lights);
      }
      if (HasGearDown) {
        output.WriteRawTag(24);
        output.WriteBool(GearDown);
      }
      if (HasFlaps) {
        output.WriteRawTag(37);
        output.WriteFloat(Flaps);
      }
      if (HasEnginesOn) {
        output.WriteRawTag(40);
        output.WriteBool(EnginesOn);
      }
      if (HasSpoilersDeployed) {
        output.WriteRawTag(48);
        output.WriteBool(SpoilersDeployed);
      }
      if (HasReverseThrust) {
        output.WriteRawTag(56);
        output.WriteBool(ReverseThrust);
      }
      if (HasOnGround) {
        output.WriteRawTag(64);
        output.WriteBool(OnGround);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      if (HasCallsign) {
        output.WriteRawTag(10);
        output.WriteString(Callsign);
      }
      if (lights_ != null) {
        output.WriteRawTag(18);
        output.WriteMessage(Lights);
      }
      if (HasGearDown) {
        output.WriteRawTag(24);
        output.WriteBool(GearDown);
      }
      if (HasFlaps) {
        output.WriteRawTag(37);
        output.WriteFloat(Flaps);
      }
      if (HasEnginesOn) {
        output.WriteRawTag(40);
        output.WriteBool(EnginesOn);
      }
      if (HasSpoilersDeployed) {
        output.WriteRawTag(48);
        output.WriteBool(SpoilersDeployed);
      }
      if (HasReverseThrust) {
        output.WriteRawTag(56);
        output.WriteBool(ReverseThrust);
      }
      if (HasOnGround) {
        output.WriteRawTag(64);
        output.WriteBool(OnGround);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (HasCallsign) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Callsign);
      }
      if (lights_ != null) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(Lights);
      }
      if (HasGearDown) {
        size += 1 + 1;
      }
      if (HasFlaps) {
        size += 1 + 4;
      }
      if (HasEnginesOn) {
        size += 1 + 1;
      }
      if (HasSpoilersDeployed) {
        size += 1 + 1;
      }
      if (HasReverseThrust) {
        size += 1 + 1;
      }
      if (HasOnGround) {
        size += 1 + 1;
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(AirplaneConfig other) {
      if (other == null) {
        return;
      }
      if (other.HasCallsign) {
        Callsign = other.Callsign;
      }
      if (other.lights_ != null) {
        if (lights_ == null) {
          Lights = new global::Xpilot.AirplaneConfig.Types.AirplaneConfigLights();
        }
        Lights.MergeFrom(other.Lights);
      }
      if (other.HasGearDown) {
        GearDown = other.GearDown;
      }
      if (other.HasFlaps) {
        Flaps = other.Flaps;
      }
      if (other.HasEnginesOn) {
        EnginesOn = other.EnginesOn;
      }
      if (other.HasSpoilersDeployed) {
        SpoilersDeployed = other.SpoilersDeployed;
      }
      if (other.HasReverseThrust) {
        ReverseThrust = other.ReverseThrust;
      }
      if (other.HasOnGround) {
        OnGround = other.OnGround;
      }
      _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(pb::CodedInputStream input) {
    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      input.ReadRawMessage(this);
    #else
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
            break;
          case 10: {
            Callsign = input.ReadString();
            break;
          }
          case 18: {
            if (lights_ == null) {
              Lights = new global::Xpilot.AirplaneConfig.Types.AirplaneConfigLights();
            }
            input.ReadMessage(Lights);
            break;
          }
          case 24: {
            GearDown = input.ReadBool();
            break;
          }
          case 37: {
            Flaps = input.ReadFloat();
            break;
          }
          case 40: {
            EnginesOn = input.ReadBool();
            break;
          }
          case 48: {
            SpoilersDeployed = input.ReadBool();
            break;
          }
          case 56: {
            ReverseThrust = input.ReadBool();
            break;
          }
          case 64: {
            OnGround = input.ReadBool();
            break;
          }
        }
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    void pb::IBufferMessage.InternalMergeFrom(ref pb::ParseContext input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
            break;
          case 10: {
            Callsign = input.ReadString();
            break;
          }
          case 18: {
            if (lights_ == null) {
              Lights = new global::Xpilot.AirplaneConfig.Types.AirplaneConfigLights();
            }
            input.ReadMessage(Lights);
            break;
          }
          case 24: {
            GearDown = input.ReadBool();
            break;
          }
          case 37: {
            Flaps = input.ReadFloat();
            break;
          }
          case 40: {
            EnginesOn = input.ReadBool();
            break;
          }
          case 48: {
            SpoilersDeployed = input.ReadBool();
            break;
          }
          case 56: {
            ReverseThrust = input.ReadBool();
            break;
          }
          case 64: {
            OnGround = input.ReadBool();
            break;
          }
        }
      }
    }
    #endif

    #region Nested types
    /// <summary>Container for nested types declared in the AirplaneConfig message type.</summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static partial class Types {
      public sealed partial class AirplaneConfigLights : pb::IMessage<AirplaneConfigLights>
      #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
          , pb::IBufferMessage
      #endif
      {
        private static readonly pb::MessageParser<AirplaneConfigLights> _parser = new pb::MessageParser<AirplaneConfigLights>(() => new AirplaneConfigLights());
        private pb::UnknownFieldSet _unknownFields;
        private int _hasBits0;
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public static pb::MessageParser<AirplaneConfigLights> Parser { get { return _parser; } }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public static pbr::MessageDescriptor Descriptor {
          get { return global::Xpilot.AirplaneConfig.Descriptor.NestedTypes[0]; }
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        pbr::MessageDescriptor pb::IMessage.Descriptor {
          get { return Descriptor; }
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public AirplaneConfigLights() {
          OnConstruction();
        }

        partial void OnConstruction();

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public AirplaneConfigLights(AirplaneConfigLights other) : this() {
          _hasBits0 = other._hasBits0;
          strobeLightsOn_ = other.strobeLightsOn_;
          landingLightsOn_ = other.landingLightsOn_;
          taxiLightsOn_ = other.taxiLightsOn_;
          beaconLightsOn_ = other.beaconLightsOn_;
          navLightsOn_ = other.navLightsOn_;
          _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public AirplaneConfigLights Clone() {
          return new AirplaneConfigLights(this);
        }

        /// <summary>Field number for the "strobe_lights_on" field.</summary>
        public const int StrobeLightsOnFieldNumber = 1;
        private bool strobeLightsOn_;
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public bool StrobeLightsOn {
          get { if ((_hasBits0 & 1) != 0) { return strobeLightsOn_; } else { return false; } }
          set {
            _hasBits0 |= 1;
            strobeLightsOn_ = value;
          }
        }
        /// <summary>Gets whether the "strobe_lights_on" field is set</summary>
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public bool HasStrobeLightsOn {
          get { return (_hasBits0 & 1) != 0; }
        }
        /// <summary>Clears the value of the "strobe_lights_on" field</summary>
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public void ClearStrobeLightsOn() {
          _hasBits0 &= ~1;
        }

        /// <summary>Field number for the "landing_lights_on" field.</summary>
        public const int LandingLightsOnFieldNumber = 2;
        private bool landingLightsOn_;
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public bool LandingLightsOn {
          get { if ((_hasBits0 & 2) != 0) { return landingLightsOn_; } else { return false; } }
          set {
            _hasBits0 |= 2;
            landingLightsOn_ = value;
          }
        }
        /// <summary>Gets whether the "landing_lights_on" field is set</summary>
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public bool HasLandingLightsOn {
          get { return (_hasBits0 & 2) != 0; }
        }
        /// <summary>Clears the value of the "landing_lights_on" field</summary>
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public void ClearLandingLightsOn() {
          _hasBits0 &= ~2;
        }

        /// <summary>Field number for the "taxi_lights_on" field.</summary>
        public const int TaxiLightsOnFieldNumber = 3;
        private bool taxiLightsOn_;
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public bool TaxiLightsOn {
          get { if ((_hasBits0 & 4) != 0) { return taxiLightsOn_; } else { return false; } }
          set {
            _hasBits0 |= 4;
            taxiLightsOn_ = value;
          }
        }
        /// <summary>Gets whether the "taxi_lights_on" field is set</summary>
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public bool HasTaxiLightsOn {
          get { return (_hasBits0 & 4) != 0; }
        }
        /// <summary>Clears the value of the "taxi_lights_on" field</summary>
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public void ClearTaxiLightsOn() {
          _hasBits0 &= ~4;
        }

        /// <summary>Field number for the "beacon_lights_on" field.</summary>
        public const int BeaconLightsOnFieldNumber = 4;
        private bool beaconLightsOn_;
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public bool BeaconLightsOn {
          get { if ((_hasBits0 & 8) != 0) { return beaconLightsOn_; } else { return false; } }
          set {
            _hasBits0 |= 8;
            beaconLightsOn_ = value;
          }
        }
        /// <summary>Gets whether the "beacon_lights_on" field is set</summary>
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public bool HasBeaconLightsOn {
          get { return (_hasBits0 & 8) != 0; }
        }
        /// <summary>Clears the value of the "beacon_lights_on" field</summary>
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public void ClearBeaconLightsOn() {
          _hasBits0 &= ~8;
        }

        /// <summary>Field number for the "nav_lights_on" field.</summary>
        public const int NavLightsOnFieldNumber = 5;
        private bool navLightsOn_;
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public bool NavLightsOn {
          get { if ((_hasBits0 & 16) != 0) { return navLightsOn_; } else { return false; } }
          set {
            _hasBits0 |= 16;
            navLightsOn_ = value;
          }
        }
        /// <summary>Gets whether the "nav_lights_on" field is set</summary>
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public bool HasNavLightsOn {
          get { return (_hasBits0 & 16) != 0; }
        }
        /// <summary>Clears the value of the "nav_lights_on" field</summary>
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public void ClearNavLightsOn() {
          _hasBits0 &= ~16;
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public override bool Equals(object other) {
          return Equals(other as AirplaneConfigLights);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public bool Equals(AirplaneConfigLights other) {
          if (ReferenceEquals(other, null)) {
            return false;
          }
          if (ReferenceEquals(other, this)) {
            return true;
          }
          if (StrobeLightsOn != other.StrobeLightsOn) return false;
          if (LandingLightsOn != other.LandingLightsOn) return false;
          if (TaxiLightsOn != other.TaxiLightsOn) return false;
          if (BeaconLightsOn != other.BeaconLightsOn) return false;
          if (NavLightsOn != other.NavLightsOn) return false;
          return Equals(_unknownFields, other._unknownFields);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public override int GetHashCode() {
          int hash = 1;
          if (HasStrobeLightsOn) hash ^= StrobeLightsOn.GetHashCode();
          if (HasLandingLightsOn) hash ^= LandingLightsOn.GetHashCode();
          if (HasTaxiLightsOn) hash ^= TaxiLightsOn.GetHashCode();
          if (HasBeaconLightsOn) hash ^= BeaconLightsOn.GetHashCode();
          if (HasNavLightsOn) hash ^= NavLightsOn.GetHashCode();
          if (_unknownFields != null) {
            hash ^= _unknownFields.GetHashCode();
          }
          return hash;
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public override string ToString() {
          return pb::JsonFormatter.ToDiagnosticString(this);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public void WriteTo(pb::CodedOutputStream output) {
        #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
          output.WriteRawMessage(this);
        #else
          if (HasStrobeLightsOn) {
            output.WriteRawTag(8);
            output.WriteBool(StrobeLightsOn);
          }
          if (HasLandingLightsOn) {
            output.WriteRawTag(16);
            output.WriteBool(LandingLightsOn);
          }
          if (HasTaxiLightsOn) {
            output.WriteRawTag(24);
            output.WriteBool(TaxiLightsOn);
          }
          if (HasBeaconLightsOn) {
            output.WriteRawTag(32);
            output.WriteBool(BeaconLightsOn);
          }
          if (HasNavLightsOn) {
            output.WriteRawTag(40);
            output.WriteBool(NavLightsOn);
          }
          if (_unknownFields != null) {
            _unknownFields.WriteTo(output);
          }
        #endif
        }

        #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
          if (HasStrobeLightsOn) {
            output.WriteRawTag(8);
            output.WriteBool(StrobeLightsOn);
          }
          if (HasLandingLightsOn) {
            output.WriteRawTag(16);
            output.WriteBool(LandingLightsOn);
          }
          if (HasTaxiLightsOn) {
            output.WriteRawTag(24);
            output.WriteBool(TaxiLightsOn);
          }
          if (HasBeaconLightsOn) {
            output.WriteRawTag(32);
            output.WriteBool(BeaconLightsOn);
          }
          if (HasNavLightsOn) {
            output.WriteRawTag(40);
            output.WriteBool(NavLightsOn);
          }
          if (_unknownFields != null) {
            _unknownFields.WriteTo(ref output);
          }
        }
        #endif

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public int CalculateSize() {
          int size = 0;
          if (HasStrobeLightsOn) {
            size += 1 + 1;
          }
          if (HasLandingLightsOn) {
            size += 1 + 1;
          }
          if (HasTaxiLightsOn) {
            size += 1 + 1;
          }
          if (HasBeaconLightsOn) {
            size += 1 + 1;
          }
          if (HasNavLightsOn) {
            size += 1 + 1;
          }
          if (_unknownFields != null) {
            size += _unknownFields.CalculateSize();
          }
          return size;
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public void MergeFrom(AirplaneConfigLights other) {
          if (other == null) {
            return;
          }
          if (other.HasStrobeLightsOn) {
            StrobeLightsOn = other.StrobeLightsOn;
          }
          if (other.HasLandingLightsOn) {
            LandingLightsOn = other.LandingLightsOn;
          }
          if (other.HasTaxiLightsOn) {
            TaxiLightsOn = other.TaxiLightsOn;
          }
          if (other.HasBeaconLightsOn) {
            BeaconLightsOn = other.BeaconLightsOn;
          }
          if (other.HasNavLightsOn) {
            NavLightsOn = other.NavLightsOn;
          }
          _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public void MergeFrom(pb::CodedInputStream input) {
        #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
          input.ReadRawMessage(this);
        #else
          uint tag;
          while ((tag = input.ReadTag()) != 0) {
            switch(tag) {
              default:
                _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
                break;
              case 8: {
                StrobeLightsOn = input.ReadBool();
                break;
              }
              case 16: {
                LandingLightsOn = input.ReadBool();
                break;
              }
              case 24: {
                TaxiLightsOn = input.ReadBool();
                break;
              }
              case 32: {
                BeaconLightsOn = input.ReadBool();
                break;
              }
              case 40: {
                NavLightsOn = input.ReadBool();
                break;
              }
            }
          }
        #endif
        }

        #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        void pb::IBufferMessage.InternalMergeFrom(ref pb::ParseContext input) {
          uint tag;
          while ((tag = input.ReadTag()) != 0) {
            switch(tag) {
              default:
                _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
                break;
              case 8: {
                StrobeLightsOn = input.ReadBool();
                break;
              }
              case 16: {
                LandingLightsOn = input.ReadBool();
                break;
              }
              case 24: {
                TaxiLightsOn = input.ReadBool();
                break;
              }
              case 32: {
                BeaconLightsOn = input.ReadBool();
                break;
              }
              case 40: {
                NavLightsOn = input.ReadBool();
                break;
              }
            }
          }
        }
        #endif

      }

    }
    #endregion

  }

  #endregion

}

#endregion Designer generated code
