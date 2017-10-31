let component = ReasonReact.statelessComponent("Footer");

let handleClick = (_event, _self) => Js.log(_event);

let make = (_children) => {
  ...component,
  render: (_self) =>
    <div className="footer">
      <h2 onClick=(_self.handle(handleClick))> (ReasonReact.stringToElement("Footer Here")) </h2>
    </div>
};
