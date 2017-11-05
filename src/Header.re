let component = ReasonReact.statelessComponent("Header");

[%bs.raw {|require('./header.scss')|}];

let make = (_children) => {
    ...component,
    render: (_self) => {
        <div className='header'>

        </div>
    }
}
