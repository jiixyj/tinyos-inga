configuration ChipSelectC {
    provides interface Set<uint8_t> as ChipSelect;
}

implementation {
    components ChipSelectP;
    ChipSelect = ChipSelectP;

    components HplAtm128GeneralIOC as GeneralIOC;
    ChipSelectP.Pin0 -> GeneralIOC.PortA5;
    ChipSelectP.Pin1 -> GeneralIOC.PortA6;
    ChipSelectP.Pin2 -> GeneralIOC.PortA7;

    components MainC;
    MainC.SoftwareInit -> ChipSelectP.Init;
}
