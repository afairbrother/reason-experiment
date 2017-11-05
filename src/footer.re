[%bs.raw {|require('./footer.css')|}];

let component = ReasonReact.statelessComponent("Footer");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <div className="footer">
      <div>
            <h3>(ReasonReact.stringToElement("About this project"))</h3>
            <p>(ReasonReact.stringToElement("This project is concerned with the efficacy of using ReasonML and the corresponding React hooks for an actual project. I am currently looking for pain points in this process as well as learning how everything works"))</p>
      </div>
      <div>
        <h3>(ReasonReact.stringToElement("About Me"))</h3>
        <p>(ReasonReact.stringToElement("I am a front-end engineer that hails from Boston, MA."))</p>
      </div>
      <div>
        <h3>(ReasonReact.stringToElement("Connect"))</h3>
      </div>
    </div>
};
